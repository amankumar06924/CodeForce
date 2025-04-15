#include<bits/stdc++.h>
using namespace std;
int precompute(int arr[],int hash[] , int length){
    for (int i = 0; i < length; i++)
    {
        hash[arr[i]] += 1;
    }
    return 0;
}

int main(){
    int arr[] = {1,2,3,3,2,1,5,5,5,5,1,1,1,11,1,2,2,2};
    int length = sizeof(arr)/sizeof(arr[0]);
    int hash[length] = {0}; // if you declearing in main function you only can decl 10^6 and bool ko 10^7 tk
    precompute(arr,hash,length);
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int num;
        cin>>num;
        cout<<"the of "<<hash[num]<<endl;
    }
    

return 0;
}