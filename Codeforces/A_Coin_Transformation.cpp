// https://codeforces.com/contest/2043/problem/0

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
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

        ll n;
        cin>>n;


        ll coins=1;
        while(n>3){
            n= n/4;
            coins=coins*2;
            // cout<<"n:"<<n<<" c:"<<coins<<endl;
        }

        cout<<coins<<endl;
    }
}