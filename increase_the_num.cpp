#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>arr[i+1])
        {
            v.push_back(arr[i]-arr[i+1]);
            arr[i+1] = arr[i];
        }
    }
    int sum = accumulate(v.begin(),v.end(),0);
    cout<<"the result is "<<sum;
    
    
return 0;
}