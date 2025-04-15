#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ct_L = 0;
    int ct_s = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 65 && s[i]<=90)
        {
            ct_L++;
        }
        else
        {
            ct_s++;
        }
    }
    vector<char> v;
    if (ct_L <= ct_s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            v.push_back(s[i] | ' ');
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            v.push_back(s[i] & '_');
        }
    }
    for (auto &i : v)
    {
        cout << i;
    }

    return 0;
}