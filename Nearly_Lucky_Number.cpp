#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ct = 0;
    for (auto &c : s)
    {
        if (c == '4' || c == '7')
        {
            ct++;
        }
    }
    if (ct == 4 || ct == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}