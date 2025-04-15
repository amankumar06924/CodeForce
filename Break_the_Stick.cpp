#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if ((k % 2 == 1 && n % 2 == 0 && (n - 1) % 2 == 1) || (k % 2 == 1 && n % 2 == 1 && (n - 1) % 2 == 0) || (n % 2 == 0 && k % 2 == 0 && (n - 1) % 2 == 1) || (k % 2 == 0 && n % 2 == 1 && (n - 1) % 2 == 1)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;

}