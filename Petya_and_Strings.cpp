#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, r;
    cin >> s >> r;

    vector<char> v;
    vector<char> f;

    for (int i = 0; i < s.size(); i++)
    {
        v.push_back(s[i] & '_');
    }

    for (int i = 0; i < r.size(); i++)
    {
        f.push_back(r[i] & '_');
    }
    bool v_win = false;
    bool f_win = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (v[i] > f[i])
        {
            v_win = true;
        }
        if (v[i] < f[i])
        {
            f_win = true;
        }
    }
    if (v_win)
    {
        cout << 1 << endl;
    }
    else if (f_win)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}
