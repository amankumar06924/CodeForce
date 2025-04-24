#include <bits/stdc++.h>
using namespace std;

int main() {
    long long testcases = 1;
    cin >> testcases;

    while (testcases--) {
        long long n;
        cin >> n;  
        string s;
        cin >> s;

        long long zeroGroups = 0, oneGroups = 0, ans = 0;
        if (s[0] == '1') {
            s = '0' + s; 
            ans--; 
        }
        char prev = s[0];
        for (char ch : s) {
            if (ch != prev) {
                if (prev == '0') {
                    zeroGroups++;
                } else {
                    oneGroups++;
                }
                prev = ch;
            }
            ans++;
        }
        if (prev == '0') {
            zeroGroups++;
        } else {
            oneGroups++;
        }
        ans += (zeroGroups + oneGroups - 1);

        if (zeroGroups >= 2 && oneGroups >= 2) {
            ans -= 2;
        } else if (max(zeroGroups, oneGroups) >= 2) {
            ans--;
        }

        cout << ans << endl;
    }
    return 0;
}