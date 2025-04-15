#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v; // Dynamic vector to store valid differences

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (b - a > 0)
        {
            v.push_back(b - a);
        }
    }

    int sum = accumulate(v.begin(), v.end(), 0); // Calculate sum of all valid differences
    cout << sum << endl;

    return 0;
}
