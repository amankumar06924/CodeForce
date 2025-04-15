#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long odd_count = (n + 1) / 2;
        long long even_count = n / 2;
        long long result = odd_count * even_count * 2;
        cout << result << endl;
    }
    return 0;
}
