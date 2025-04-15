#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i <t; i++)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+n);
        for (int p = 0; p < k; p++)
        {
            if (arr[p]==1)
            {
                arr[p]=6;
            }else if(arr[p]==2){
                arr[p]=5;
            }else if(arr[p]==3){
                arr[p]=4;
            }
        }
        int sum = accumulate(arr,arr+n,0);
        cout<<sum<<endl;
        
        
    }
    
return 0;
}
