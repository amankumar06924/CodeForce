#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i & 1)
            {
                cout << "#";
            }
            else if (i % 4 == 0)
            {
                if (j == 0)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
            else if (i % 2 == 0 && i % 4 != 0)
            {
                if (j == m - 1)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}