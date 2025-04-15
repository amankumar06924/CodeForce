#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int p = 0;
        int q = 0;
        for (int i = 1; ; i += 2) {
            if ((a - i) < 0) {
                break;
            }
            a -= i;
            p++;
        }
        for (int i = 2; ; i += 2) {
            if ((b - i) < 0) {
                break;
            }
            b -= i;
            q++;
        }
        if (p <= q) {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Limak" << endl;
        }
    }
    return 0;
}
