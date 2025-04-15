#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());

        int count = 0;
        int members = 0;

        for (int i = 0; i < n; i++)
        {
            members++;
            if (a[i] * members >= x)
            {
                count++;
                members = 0;
            }
        }

        cout << count << endl;
    }

    return 0;
}