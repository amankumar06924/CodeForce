#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v(5, 0);
    v.insert(v.begin() + 2, 5);
    v.insert(v.begin() + 3, 2);
    v.erase(v.begin() + 2);

    for (auto &i : v)
    {
        cout << i << endl;
    }

    return 0;
}