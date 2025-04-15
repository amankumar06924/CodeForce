#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;
        if (k == 0) {
            cout << 0 << endl;
        } else {
            // Check if it's possible to achieve k
            int max_possible_sum = n * p;
            int min_possible_sum = -n * p;
            if (k > max_possible_sum || k < min_possible_sum) {
                cout << -1 << endl;
            } else {
                int abs_k = abs(k);
                int operations = (abs_k + p - 1) / p; // This rounds up the division
                if (operations <= n) {
                    cout << operations << endl;
                } else {
                    cout << -1 << endl;
                }
            }
        }
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n == 1)
        {
            cout << k << " ";
        }
        else
        {
            cout << k << " ";
            for (int i = 2; i < n; i++)
            {
                cout << 0 << " ";
            }
            cout << k << " ";
        }
        cout<<endl;
    }

    return 0;
}