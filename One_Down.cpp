#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        string p;
        cin >> s >> p;
        int ct = 0;
        int ct2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && p[i] == '0')
            {
                ct++;
            }else if(s[i]=='0'&&p[i]=='1'){
                ct2++;

            }
        }
        if (s == p)
        {
            cout << "YES" << endl;
        }
        else if (ct % 2 == 0 && ct > 0 && ct2==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}