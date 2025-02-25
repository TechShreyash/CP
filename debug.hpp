#include <bits/stdc++.h>
using namespace std;

// Debug helper struct with overloaded _print functions.
struct debug_struct {
    // Generic single value.
    template <typename T>
    static void _print(const T &t) { cerr << t; }
    
    // Base case for no arguments.
    static void _print() {}

    // Variadic template: prints multiple values separated by commas.
    template <typename T, typename... V>
    static void _print(const T &t, const V &...v) {
        _print(t);
        if (sizeof...(v)) {
            cerr << ", ";
            _print(v...);
        }
    }

    // Overload for vector.
    template <typename T>
    static void _print(const vector<T> &v) {
        cerr << "[ ";
        for (size_t i = 0; i < v.size(); i++) {
            _print(v[i]);
            if(i != v.size()-1) cerr << ", ";
        }
        cerr << " ]";
    }

    // Overload for deque.
    template <typename T>
    static void _print(const deque<T> &d) {
        cerr << "[ ";
        for (size_t i = 0; i < d.size(); i++) {
            _print(d[i]);
            if(i != d.size()-1) cerr << ", ";
        }
        cerr << " ]";
    }

    // Overload for set.
    template <typename T>
    static void _print(const set<T> &s) {
        cerr << "{ ";
        size_t cnt = 0, sz = s.size();
        for (const auto &i : s) {
            _print(i);
            if(++cnt != sz) cerr << ", ";
        }
        cerr << " }";
    }

    // Overload for map.
    template <typename T, typename V>
    static void _print(const map<T, V> &mp) {
        cerr << "{ ";
        size_t cnt = 0, sz = mp.size();
        for (const auto &p : mp) {
            _print(p);
            if(++cnt != sz) cerr << ", ";
        }
        cerr << " }";
    }

    // Overload for pair.
    template <typename T, typename V>
    static void _print(const pair<T, V> &p) {
        cerr << "(";
        _print(p.first);
        cerr << ", ";
        _print(p.second);
        cerr << ")";
    }
    
    // Overload for C-string literals: prints as a whole string.
    template <size_t N>
    static void _print(const char (&a)[N]) {
        cerr << a;
    }
    
    // Overload for raw arrays (non-char arrays): comma separated.
    template <typename T, size_t N>
    static void _print(const T (&a)[N]) {
        // This overload will be chosen for arrays that are not of type char.
        // Print with comma separation.
        cerr << "[ ";
        for (size_t i = 0; i < N; i++) {
            _print(a[i]);
            if(i != N - 1) cerr << ", ";
        }
        cerr << " ]";
    }
};

// Variadic debug macro that prints the current line number and the variable names (as a string)
// followed by their values. Debug output goes to standard error.
#define dbg(...)                                                       \
    do {                                                               \
        cerr << "[" << __LINE__ << "] [ " << #__VA_ARGS__ << " ] = ";   \
        debug_struct::_print(__VA_ARGS__);                             \
        cerr << "\n";                                                  \
    } while (0)
