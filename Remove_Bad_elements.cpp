#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        map<int,int>m;
        for (int i = 0; i <n; i++)
        {
            m[arr[i]]++;
        }
        vector<int>v;
        for (auto &f : m)
        {
            v.push_back(f.second);
        }
        int max = *max_element(v.begin(),v.end());
        cout<<n-max<<endl;  
    }
    
return 0;
}