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
        int a = n;
        int b = n - 1;
        int c = n - 2;
        if (a + b <= c || b + c <= a || c + a <= b)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a + b + c << endl;
        }
    }

    return 0;
}
