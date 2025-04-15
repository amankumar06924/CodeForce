#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ct = 1;
    for (int i = 1; i < n; i++)
    {
        if ((v[i] == "10" && v[i-1] == "01") || (v[i] == "01" && v[i-1] == "10"))
        {
            ct++;
        }
    }

    cout << ct << endl;

    return 0;
}
