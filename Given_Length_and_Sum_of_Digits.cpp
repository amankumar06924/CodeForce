#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, s;
    cin >> m >> s;
    if (s == 0)
    {
        if (m == 1)
        {
            cout << "0 0";
            return 0;
        }
        else
        {
            cout << "-1 -1";
        }
        return 0;
    }
    string max = "";
    string mi = "";
    for (int i = 0; i < m; i++)
    {
        int k = min(9, s);
        max.push_back(k + '0');
        s = s - k;
    }
    if (s > 0)
    {
        cout << "-1 -1";
        return 0;
    }
    for (int i = m - 1; i >= 0; i--)
    {
        mi.push_back(max[i]);
    }
    int j = 0;
    while (mi[j] == '0')
    {
        j++;
    }
    mi[0]++;
    mi[j]--;
    cout << mi << " " << max << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s, p, q;
//         cin >> s >> p >> q;
//         cout << s[0] << p[0] << q[0] << endl;
//     }

//     return 0;
// }