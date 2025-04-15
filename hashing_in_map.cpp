#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,3,2,1,5,5,5,5,1,1,1,11,1,2,2,2};
    int length = sizeof(arr)/sizeof(arr[0]);
    int hash[length] = {0};
    map<int,int>a;           // in ordered map the time comp is logn and in unordered map the time comp is 0(1)
    for (int i = 0; i < length; i++)
    {
        a[arr[i]]++;
    }
    
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int num;
        cin>>num;
        cout<<"the of "<<a[num]<<endl;
    }
    

return 0;
}