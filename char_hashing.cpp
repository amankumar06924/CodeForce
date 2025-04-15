#include <bits/stdc++.h>
using namespace std;
int precompution_char(string s, int hash[], int len){
    for (int i = 0; i < len; i++)
    {
        hash[s[i] - 'a']++;
    }
    return 0;
}
int main()
{
    string s = "abcdeedcba";
    int len = s.size();
    int hash[26] = {0};
    precompution_char(s, hash, len);
    int q;
    cin >> q;
    for (int i = 0; i < q; i++){
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}
