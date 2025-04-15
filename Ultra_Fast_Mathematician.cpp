#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, r;
    cin >> s >> r;
    vector<char> v;
    for (int i = 0; i < s.size(); i++) {
        if ((s[i]=='0'&&r[i]=='0') || (s[i]=='1' && r[i]=='1'))
        {
            cout<<0;
        }else
        {
            cout<<1;
        }
    }

    return 0;
}
