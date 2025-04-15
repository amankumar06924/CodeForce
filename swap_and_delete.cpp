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
        int ct1 = count(s.begin(), s.end(), '1');
        int ct0 = count(s.begin(), s.end(), '0');
        if (ct1 == s.size() || ct0 == s.size())
        {
            cout << s.size() << endl;
        }
        else if (ct1 == ct0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << s.size() - 2 << endl;
        }
    }

    return 0;
}