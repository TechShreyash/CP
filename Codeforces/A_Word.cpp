// https://codeforces.com/problemset/problem/59/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int u = 0, l = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if(isupper(s[i])){
            u++;
        }
        else{
            l++;
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        if( u>l){
            s[i]= toupper(s[i]);
        }
        else{
            s[i]= tolower(s[i]);
        }
    }

    cout<<s;
}