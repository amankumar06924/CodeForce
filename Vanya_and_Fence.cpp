#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    int arr[n];
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i]>h)
        {
            ct = ct + 2;
        }else
        {
            ct = ct + 1;
        }
    }
    cout<<ct<<endl;
    
return 0;
}