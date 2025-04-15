#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string b;
        cin>>b;
        int c1 = 0;
        int c0 = 0;
        int count1 = 0;
        int count0  = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='1')
            {
                count1++;
            }else if (s[i]=='0')
            {
            count0++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (b[i]=='1')
            {
                c1++;
            }else if (b[i]=='0')
            {
            c0++;
            }
        }
        if (count1 == c1 || count0 == c0)
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
        
    }
    
return 0;
}