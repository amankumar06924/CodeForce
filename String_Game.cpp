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
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        bool r = false;
        for (auto &v : m)
        {
            if (v.second % 2 != 0)
            {
                cout << "NO" << endl;
                r = true;
                break;
            }
        }
        if (!r)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}