// https://www.codechef.com/START166D/problems/WRAPGIFTS

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
        int h,l,w;

        cin>>h>>l>>w;

        int a = 2*((h*l)+(l*w)+(h*w));

        cout<<1000/a<<endl;
    }
}