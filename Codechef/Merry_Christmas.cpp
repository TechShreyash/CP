// https://www.codechef.com/START166D/problems/MERRYXMAS

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x;
    cin>>x;
    if (x<=2){
        cout<<1;
    }
    else if (x<=6){
        cout<<2;
    }
    else{
        cout<<3;
    }
}