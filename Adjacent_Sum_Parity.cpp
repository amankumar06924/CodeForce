#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        int sum = accumulate(b,b+n,0);
        if (sum%2==0)
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
        
    }
    
return 0;
}