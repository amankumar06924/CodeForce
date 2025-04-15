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
        cin >> s;
        int ct1 = 0;
        int ct0 = 0;
        short(s);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ct1++;
            }
            else
            {
                ct0++;
            }
        }
        // cout<<ct1<<" "<<ct0<<endl;
        if (ct0 == n)
        {
            cout << 0 << endl;
        }
        else if (ct1 == n)
        {
            cout << 1 << endl;
        }
        else if (ct1 > ct0)
        {
            cout << ct0 << endl;
        }
        else
        {
            cout << ct1 << endl;
        }
    }

    return 0;
}