#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    set<int> s;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    int y;
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        int r;
        cin >> r;
        s.insert(r);
    }
    if (s.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}