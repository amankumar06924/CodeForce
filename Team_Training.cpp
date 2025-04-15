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
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int ct = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0 || v[i] == 1 || v[i] == 3 || v[i] == 2 || v[i] == 5)
            {
                mp[v[i]]++;
            }

            if (mp[0] >= 3 && mp[1] >= 1 && mp[2] >= 2 && mp[3] >= 1 && mp[5] >= 1)
            {
                ct = i + 1;
                break;
            }
        }

        cout << ct << endl;
    }

    return 0;
}