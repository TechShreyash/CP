// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

#include <iostream>

using namespace std;

int main(){
    int n1,n2;
    char s;

    cin>> n1>>s>>n2;

    if (s=='>'){
        if (n1>n2){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    else if (s=='<'){
        if (n1<n2){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    else if (s=='='){
        if (n1==n2){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
}