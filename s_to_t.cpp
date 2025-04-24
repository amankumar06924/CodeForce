#include <bits/stdc++.h>
using namespace std;
void logic()
{
    int n;
    cin >> n;
    string s, p;
    cin >> s >> p;
    int first = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != p[i])
        {
            cout << -1 << endl;
            return;
        }
        if (s[i] == '1')
        {
            first = i;
            break;
        }
    }
    if (first == -1)
    {
        cout << 0 << endl;
        return;
    }
    vector<int> v;
    for (int i = first + 1; i < n; i++)
    {
        if (s[i] != '1')
            v.push_back(i - 1);
        s[i] = '1';
    }
    for (int i = n - 1; i >= first + 1; i--)
    {
        if (s[i] != p[i])
        {
            v.push_back(i - 1);
        }
    }
    cout << v.size() << endl;
    for (auto i : v)
    {
        cout << i + 1 << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        logic();
    }

    return 0;
}