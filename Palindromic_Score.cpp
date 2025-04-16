#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if (v[0] == 0 && v[1] == 0)
        {
            cout << 0 << endl;
        }
        else if (v[0] == 0 && v[1] != 0 && v[2] != 0)
        {
            cout << v[1] << endl;
        }
        else
        {
            if (v[0] % 2 == 1 && v[1] % 2 == 1)
            {
                cout << v[1] + v[0] - 1 << endl;
            }
            else
            {
                cout << v[1] + v[0] << endl;
            }
        }
    }

    return 0;
}