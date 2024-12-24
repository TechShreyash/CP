// https://leetcode.com/problems/peak-index-in-a-mountain-array

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int size = 10; // vector.size();
    int arr[10] = {24,69,100,99,79,78,67,36,26,19};

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    int max = -1;
    int max_index=-1;
    int prev =-1;

    while (start <= end)
    {
        // cout<<"m:"<<mid<<endl;

        if(prev==mid){
            break;
        }
        prev=mid;

        if (arr[mid] > max)
        {
            max = arr[mid];
            max_index = mid;
        }

        if(arr[mid+1]>arr[mid]){

            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    cout<<max_index;
}