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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> ct(n);
        for (int i = 0; i < n; i++)
        {
            ct.push_back(v[i] - 1);
        }
        int sum = accumulate(ct.begin(), ct.end(), 0);
        cout << sum << endl;
    }

    return 0;
}