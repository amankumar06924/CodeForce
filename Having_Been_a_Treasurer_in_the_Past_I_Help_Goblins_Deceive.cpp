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
        string s;
        cin >> s;
        long long x = count(s.begin(), s.end(), '_');
        long long p = count(s.begin(), s.end(), '-');
        long long f = (p / 2) * (x) * ((p + 1) / 2);
        cout << f << endl;
    }

    return 0;
}