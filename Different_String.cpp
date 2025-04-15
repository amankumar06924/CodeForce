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
        vector<string> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        string result = "";
        for (int i = 0; i < n; i++)
        {
            if (v[i][i] == '0')
                result += '1';
            else
                result += '0';
        }

        cout << result << endl;
    }

    return 0;
}