#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int rest;
        for (int j = 0; j < n; j++)
        {
            if (k>=arr[j])
            {
                cout<<1;
                k = k - arr[j];
            }else{
                cout<<0;
            } 
        }
        cout<<endl;
    }
    
return 0;
}