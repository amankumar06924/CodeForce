#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> r;
    for (int i = 0; i < n; i++)
    {
        r.insert(s[i]);
    }
    if (r.size() >= 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}