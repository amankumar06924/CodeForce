#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); // Read the full input line including spaces
    set<char> r; // Set to store unique letters
    for (auto &i : s) {
        if (i >= 'a' && i <= 'z') { // Only process lowercase English letters
            r.insert(i); // Insert into the set
        }
    }
    cout << r.size() << endl; // Print the size of the set (number of unique letters)
    return 0;
}
