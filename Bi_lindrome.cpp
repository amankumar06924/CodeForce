#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<char, int> charCounts;
        for (char c : s) {
            charCounts[c]++;
        }

        bool foundRepeat = false;
        for (auto &val : charCounts) {
            if (val.second >= 2) {
                foundRepeat = true;
                break;
            }
        }

        if (foundRepeat) {
            cout << n - 2 << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}