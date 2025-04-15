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
        vector<int> v;
        map<int, int> mp;
        int element = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            mp[v[i]]++;
        }
        for (auto &i : mp)
        {
            if (i.second == 1)
            {
                element = i.first;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] == element)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}