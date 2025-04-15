#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    int ct = 0;
    for (auto &i : v)
    {
        if (i.second - i.first >= 2)
        {
            ct++;
        }
    }
    cout << ct << endl;

    return 0;
}