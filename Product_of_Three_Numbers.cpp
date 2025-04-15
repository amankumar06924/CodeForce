#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        set<long long> v;
        for (long long i = 2; i*i < n; i++)
        {
            if (n % i == 0)
            {
                v.insert(i);
                n = n / i;
            }
            if (v.size() == 2 && n!=1)
            {
                v.insert(n);
                break;
            }
        }
        if (v.size() == 3)
        {
            cout << "YES" << endl;
            for (auto &i : v)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}