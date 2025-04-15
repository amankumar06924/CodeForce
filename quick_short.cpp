#include<bits/stdc++.h>
using namespace std;
int portition(vector<int>&arr , int low , int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i<j){
        while (arr[i]<=pivot && i<=high-1){
           i++;
        }
        while (arr[j]>pivot && j>=low + 1){
            j--;
        }
        if (i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(vector<int>&arr , int low , int high){
    if (low < high){
        int pIndex = portition(arr , low , high);
        qs(arr , low , pIndex-1);
        qs(arr , pIndex+1 , high);
    }
}

int main(){
    vector<int> arr = {8,4,3,4,7,8,7,9,8,7};
    qs(arr , 0 , arr.size()-1);
    for (int i = 0; i < arr.size(); ++i){
        cout<<arr[i]<<" "; 
    }
return 0;
}