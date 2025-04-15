#include <iostream>
#include <vector>

using namespace std;

void solution(vector<int>& arr) {
    int xxory = 0;
    
    for (int val : arr) {
        xxory ^= val;
    }

    int rsbm = xxory & -xxory; // Rightmost Set Bit Mask
    int x = 0, y = 0;

    for (int val : arr) {
        if ((val & rsbm) == 0) {
            x ^= val;
        } else {
            y ^= val;
        }
    }

    if (x < y) {
        cout << x << endl;
        cout << y << endl;
    } else {
        cout << y << endl;
        cout << x << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    solution(arr);
    
    return 0;
}
