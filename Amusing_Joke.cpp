#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, r, t;
    cin >> s >> r >> t;
    map<char, int> m;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    for (int i = 0; i < r.size(); i++)
    {
        m[r[i]]++;
    }
    for (int i = 0; i < t.size(); i++)
    {
        mp[t[i]]++;
    }
    // Compare the frequencies to decide
    if (m == mp)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

// The Comparison m == mp:
// The comparison checks if both maps have the same keys (characters) and the same values (frequencies).
// If they match exactly (same characters with the same counts), it means the pile of letters perfectly matches the combined names, and "YES" is printed.
// If there's even one mismatch (an extra or missing letter, or an incorrect count), the comparison fails, and "NO" is printed.