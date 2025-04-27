#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<int> v;
        for (int i = 0; i < s.size(); i++)
        {
            v.push_back(s[i] - '0');
        }
        sort(v.begin(), v.end());
        vector<int> r(10);
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j] >= 9 - i)
                {
                    r[i] = v[j];
                    v[j] = -1;
                    break;
                }
            }
        }
        for (auto k : r)
        {
            cout << k;
        }
        cout << endl;
    }

    return 0;
}