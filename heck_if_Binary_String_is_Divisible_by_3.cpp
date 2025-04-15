#include <iostream>
#include <string>
using namespace std;

bool isDivisibleBy3(const string &str) {
    int odd = 0, even = 0;
    
    for (int i = 0; i < str.length(); i++) {
        int bit = str[i] - '0';
        
        if (i % 2 == 0)
            even += bit;
        else
            odd += bit;
    }
    
    int delta = even - odd;
    return (delta % 11 == 0);
}

int main() {
    string str;
    cin >> str;
    
    if (isDivisibleBy3(str))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    
    return 0;
}
