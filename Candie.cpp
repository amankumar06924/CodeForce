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
        for (int k = 2; k * k <= n; k++)
        {
            for (int x = 1; x <= n; x++)
            {
                long long r = n / x;
                if (r == ((1 << k) - 1))
                {
                    cout << x << endl;
                    break;
                }
            }
        }
    }
    return 0;
}