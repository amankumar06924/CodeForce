#include <bits/stdc++.h>
using namespace std;

void amn() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << -1 << endl;
        return;
    }
    vector<int> A(n);
    if (n % 2 == 0) {
        for (int i = 0; i < n; i++) {
            A[i] = (i % 2 == 0) ? 1 : -1;
        }
    } else {
        A[0] = 1;
        A[1] = 2;
        A[2] = -3;
        for (int i = 3; i < n; i++) {
            if(i&1){
                A[i] = 1;
            }else{
                A[i] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << A[i]<<" ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        amn();
    }
    
    return 0;
}