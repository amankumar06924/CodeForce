#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,zero=0,one=0,zero1=0,one1=0;
        cin>>a;
        string s,s1;
        cin>>s>>s1;
        for(int i=0; i < s.size(); i++)
        {
            if(s[i]=='0')zero++;
            else if(s[i]=='1')one++;
        }
        for(int i=0; i < s1.size(); i++)
        {
            if(s1[i]=='0')zero1++;
            else if(s1[i]=='1')one1++;
        }
        if(zero==zero1 && one==one1 )cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}