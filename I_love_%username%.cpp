#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ct = 0;
    if (n == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > arr[i - 1])
            {
                ct++;
            }
        }
        cout << ct << endl;
    }

    return 0;
}