#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> m;
        for (int i = 0; i < 2 * n; ++i) {
            int s;
            cin >> s;
            m[s]++;
        }
        bool repeat = false;
        for (auto pr : m) {
            if (pr.second > 2) {
                cout << "NO" << endl;
                repeat = true;
                break;
            }
        }

        if (!repeat) {
            cout << "YES" << endl;
        }
    }
    return 0;
}
