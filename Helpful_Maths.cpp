#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for (int i = 0; i <s.size(); i+=2)
    {
        for (int j = 0; j < (s.size() - 1); j+=2)
        {
            if (s[j] > s[j + 2])
            {

                int temp = s[j];
                s[j] = s[j + 2];
                s[j + 2] = temp;
            }
        }
    }
   cout<<s<<endl;
    return 0;
}