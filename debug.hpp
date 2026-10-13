#pragma once

// C++17 debug printer. Define DEBUG_DISABLED to disable dbg(...), including
// evaluation of its arguments. Output goes only to std::cerr.
#include <cstddef>
#include <iostream>
#include <iterator>
#include <optional>
#include <queue>
#include <stack>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>
#include <variant>

namespace debug_detail
{

    template <class T, class = void>
    struct is_range : std::false_type
    {
    };
    template <class T>
    struct is_range<T, std::void_t<decltype(std::begin(std::declval<const T &>())),
                                   decltype(std::end(std::declval<const T &>()))>>
        : std::true_type
    {
    };

    template <class T, class = void>
    struct is_associative : std::false_type
    {
    };
    template <class T>
    struct is_associative<T, std::void_t<typename T::key_type>> : std::true_type
    {
    };

    template <class T, class = void>
    struct is_tuple : std::false_type
    {
    };
    template <class T>
    struct is_tuple<T, std::void_t<decltype(std::tuple_size<T>::value)>>
        : std::true_type
    {
    };

    template <class T, class = void>
    struct is_streamable : std::false_type
    {
    };
    template <class T>
    struct is_streamable<T, std::void_t<decltype(std::declval<std::ostream &>()
                                                 << std::declval<const T &>())>>
        : std::true_type
    {
    };

    template <class T>
    struct is_optional : std::false_type
    {
    };
    template <class T>
    struct is_optional<std::optional<T>> : std::true_type
    {
    };
    template <class T>
    struct is_variant : std::false_type
    {
    };
    template <class... T>
    struct is_variant<std::variant<T...>> : std::true_type
    {
    };
    template <class T>
    struct is_stack : std::false_type
    {
    };
    template <class T, class C>
    struct is_stack<std::stack<T, C>> : std::true_type
    {
    };
    template <class T>
    struct is_queue : std::false_type
    {
    };
    template <class T, class C>
    struct is_queue<std::queue<T, C>> : std::true_type
    {
    };
    template <class T>
    struct is_priority_queue : std::false_type
    {
    };
    template <class T, class C, class Compare>
    struct is_priority_queue<std::priority_queue<T, C, Compare>> : std::true_type
    {
    };
    template <class T>
    inline constexpr bool always_false = false;

    inline void print_quoted(std::string_view text, char quote = '"')
    {
        std::cerr << quote;
        for (unsigned char ch : text)
        {
            switch (ch)
            {
            case '\\':
                std::cerr << "\\\\";
                break;
            case '\n':
                std::cerr << "\\n";
                break;
            case '\r':
                std::cerr << "\\r";
                break;
            case '\t':
                std::cerr << "\\t";
                break;
            case '\0':
                std::cerr << "\\0";
                break;
            case '\b':
                std::cerr << "\\b";
                break;
            case '\f':
                std::cerr << "\\f";
                break;
            case '\v':
                std::cerr << "\\v";
                break;
            default:
                if (ch == static_cast<unsigned char>(quote))
                    std::cerr << '\\' << static_cast<char>(ch);
                else if (ch < 32 || ch == 127)
                {
                    constexpr char hex[] = "0123456789abcdef";
                    std::cerr << "\\x" << hex[ch >> 4] << hex[ch & 15];
                }
                else
                    std::cerr << static_cast<char>(ch);
            }
        }
        std::cerr << quote;
    }

    template <class T>
    void print(const T &value)
    {
        using U = std::remove_cv_t<std::remove_reference_t<T>>;

        if constexpr (std::is_same_v<U, bool>)
        {
            std::cerr << (value ? "true" : "false");
        }
        else if constexpr (std::is_same_v<U, char>)
        {
            print_quoted(std::string_view(&value, 1), '\'');
        }
        else if constexpr (std::is_same_v<U, signed char> ||
                           std::is_same_v<U, unsigned char>)
        {
            std::cerr << static_cast<int>(value);
        }
        else if constexpr (std::is_same_v<U, std::string> ||
                           std::is_same_v<U, std::string_view>)
        {
            print_quoted(value);
        }
        else if constexpr (std::is_array_v<U> &&
                           std::is_same_v<std::remove_extent_t<U>, char>)
        {
            // Bound the read, even if this char array has no null terminator.
            std::size_t length = 0;
            while (length < std::extent_v<U> && value[length] != '\0')
                ++length;
            print_quoted(std::string_view(value, length));
        }
        else if constexpr (std::is_same_v<U, char *> ||
                           std::is_same_v<U, const char *>)
        {
            if (value)
                print_quoted(value); // Pointer must refer to a valid C string.
            else
                std::cerr << "nullptr";
        }
        else if constexpr (std::is_same_v<U, std::nullptr_t>)
        {
            std::cerr << "nullptr";
        }
        else if constexpr (is_optional<U>::value)
        {
            if (value)
            {
                std::cerr << "optional(";
                print(*value);
                std::cerr << ')';
            }
            else
                std::cerr << "nullopt";
        }
        else if constexpr (std::is_same_v<U, std::monostate>)
        {
            std::cerr << "monostate";
        }
        else if constexpr (is_variant<U>::value)
        {
            if (value.valueless_by_exception())
                std::cerr << "variant(valueless)";
            else
            {
                std::cerr << "variant<" << value.index() << ">(";
                std::visit([](const auto &item)
                           { print(item); }, value);
                std::cerr << ')';
            }
        }
        else if constexpr (is_stack<U>::value || is_queue<U>::value ||
                           is_priority_queue<U>::value)
        {
            // Adaptors have no iterators. Print a copy in pop order.
            auto copy = value;
            if constexpr (is_stack<U>::value)
                std::cerr << "stack(top first)[";
            else if constexpr (is_queue<U>::value)
                std::cerr << "queue(front first)[";
            else
                std::cerr << "priority_queue(top first)[";
            bool first = true;
            while (!copy.empty())
            {
                if (!first)
                    std::cerr << ", ";
                first = false;
                if constexpr (is_queue<U>::value)
                    print(copy.front());
                else
                    print(copy.top());
                copy.pop();
            }
            std::cerr << ']';
        }
        else if constexpr (is_range<U>::value)
        {
            constexpr bool braces = is_associative<U>::value;
            std::cerr << (braces ? '{' : '[');
            bool first = true;
            for (const auto &item : value)
            {
                if (!first)
                    std::cerr << ", ";
                first = false;
                print(item);
            }
            std::cerr << (braces ? '}' : ']');
        }
        else if constexpr (is_tuple<U>::value)
        {
            std::cerr << '(';
            std::apply([](const auto &...items)
                       {
            std::size_t index = 0;
            ((std::cerr << (index++ ? ", " : ""), print(items)), ...); }, value);
            std::cerr << ')';
        }
        else if constexpr (std::is_enum_v<U>)
        {
            print(static_cast<std::underlying_type_t<U>>(value));
        }
        else if constexpr (is_streamable<U>::value)
        {
            std::cerr << value;
        }
        else
        {
            static_assert(always_false<U>,
                          "dbg: unsupported type; provide an ostream operator<<");
        }
    }

} // namespace debug_detail

// Retains your existing debug_struct::_print(...) interface.
struct debug_struct
{
    template <class... T>
    static void _print(const T &...values)
    {
        std::size_t index = 0;
        ((std::cerr << (index++ ? ", " : ""), debug_detail::print(values)), ...);
    }
};

#ifndef DEBUG_DISABLED
#define dbg(...)                                                           \
    do                                                                     \
    {                                                                      \
        std::cerr << "[" << __LINE__ << "] [ " << #__VA_ARGS__ << " ] = "; \
        debug_struct::_print(__VA_ARGS__);                                 \
        std::cerr << '\n';                                                 \
    } while (0)
#else
#define dbg(...) \
    do           \
    {            \
    } while (0)
#endif
