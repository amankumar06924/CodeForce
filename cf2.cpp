// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     char s[] = {0,0,1};
//     int y = 0;
//     for(int j=0;j<3;j++){
//         y = y + s[3-j-1]*(1<<j);
//     }
//     cout<<y;
// return 0;
// }
// 2
// 3
// 110
// 4
// 0001
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n-1; i++)
        {
            if (n>2 && ((s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '1') ||
                (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1') ||
                (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0') ||
                (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '1')))
            {
                s[i] = '1';
                s[i + 1] = '0';
                s[i + 2] = '0';
                i += 3;
                cout << (s) << endl;
            }else{
                cout<<s<<endl;
            }
        }
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;

//         string result;
//         int i = 0;
//         while (i <= n - 3) {
//             if ((s[i] == '1' && s[i+1] == '1' && s[i+2] == '1') ||
//                 (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1') ||
//                 (s[i] == '1' && s[i+1] == '1' && s[i+2] == '0') ||
//                 (s[i] == '0' && s[i+1] == '1' && s[i+2] == '1')) {
//                 result += "100";
//                 i += 3;
//             } else {
//                 result += s[i];
//                 i++;
//             }
//         }

//         // Append the remaining characters
//         while (i < n) {
//             result += s[i];
//             i++;
//         }

//         cout << result << endl;
//     }
//     return 0;
// }
