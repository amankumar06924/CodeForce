#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int x = 0;
    int count = 0;

    for (int i = 1; i <= n; i++) {
        x += i * 5;
        if ((x + k) <= 240) {
            count++;
        } else {
            break;
        }
    }

    cout << count << endl;
    return 0;
}
