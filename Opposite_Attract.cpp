// https://www.codechef.com/problems/P2169

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t --)
    {

        int n;
        cin>>n;
        string s;
        cin>>s;

        string t;
        for(int i =0;i<n;i++){
            if(s[i]=='1'){
                t+='0';
            }
            else{
                t+='1';

            }
        }

        cout<<t<<endl;
    }
}