#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]=='>')
            {
                s[i]='<';
            }else if (s[i]=='<')
            {
                s[i]='>';
            }
        }
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]=='>' && s[i+1]=='<')
            {
                count++;
            }
            
        }
        cout<<count<<endl;
        
    }
    
return 0;
}