#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //ios_base::sync_with_stdio(false);: This line disables the synchronization between the C++ standard streams (cin, cout) and the C standard streams (stdio, stdio.h). By default, this synchronization is enabled to ensure that the input/output operations are consistent between C and C++ streams. Disabling it allows for faster input and output operations since it avoids the overhead of synchronization.

    // cin.tie(NULL);: This line unties the cin stream from the cout stream. By default, cin and cout are tied, meaning that cout is flushed (all pending output is sent to the console) every time cin is called. Untying them prevents this automatic flushing, which can result in a significant speed improvement in input/output operations.
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % k == 0)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
    }

    return 0;
}