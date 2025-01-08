// PROBLEM LINK

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

    while (t--)
    {

        int n;
        cin >> n;

        int arr[n];
        int maxP = -1;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if ((maxP == -1) || (arr[i] > arr[maxP]))
            {
                maxP = i;
            }
        }

        int X;

        if (maxP == 0)
        {
            X = arr[0];
        }
        else
        {
            X = arr[maxP] ^ arr[maxP - 1];
            cout<<X<<endl;

            for (int i = maxP - 2; i >= 0; i--)
            {
                // cout << i << endl;
                if (X == arr[i])
                {
                    continue;
                }

                X = X ^ arr[i];
                // cout << X << endl;
            }
        }

        cout << maxP << endl;
        cout << X << endl;

        int score = 0;

        for (int i = 0; i < n; i++)
        {

            if(X==arr[i]){
                score+=X;
            }
            else{
                X= X^arr[i];
            }                            
        }

        cout<<score<<endl;

    }
}