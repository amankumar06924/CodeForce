#include <bits/stdc++.h>
using namespace std;

bool check_f(int finger[], int glove[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (glove[i] < finger[i])
        {
            return false;
        }
    }
    return true;
}

bool check_b(int finger[], int glove[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (glove[n-1-i] < finger[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int finger[n];
        int glove[n];
        for (int i = 0; i < n; i++)
        {
            cin >> finger[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> glove[i];
        }

        if (check_f(finger, glove, n) && check_b(finger, glove, n))
        {
            cout << "both" << endl;
        }
        else if (check_f(finger, glove, n))
        {
            cout << "front" << endl;
        }
        else if (check_b(finger, glove, n))
        {
            cout << "back" << endl;
        }
        else
        {
            cout << "none" << endl;
        }
    }

    return 0;
}
