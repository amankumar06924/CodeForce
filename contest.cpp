
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         vector<pair<char,int>>v;
//         for (int i = 0; i < n; i++)
//         {
//             char a;
//             int b;
//             v.push_back({a,b});
//         }
//         int l = 1;
//         int r = 1;
//         int tot1  =0;
//         int tot2 = 0;
//         int total = 0;
//         for (int  i = 0; i < n; i++)
//         {
//             if (v[i].first=='+')
//             {
//                 tot1 += l*v[i].second;
//             }else if(v[i].first=='x'){
//                 tot2 += r*(v[i].second-1);
//             }
//             total = tot1 + tot2;
//             if (total%2==1)
//             {
//                 tot1 = total/2;
//                 tot2 = (total +1)/2;
//             }else
//             {
//                 tot1 = total/2;
//                 tot2 = total/2;
//             }
//         }
//         cout<<total<<endl;
//     }
    
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<char, int>> v;
        for (int i = 0; i < n; i++)
        {
            char a1, a2;
            int b1, b2;
            cin >> a1 >> b1 >> a2 >> b2;
            v.push_back({a1, b1});
            v.push_back({a2, b2});
        }
        int l = 1;
        int r = 1;
        int tot1 = 1;
        int tot2 = 1;
        int total1 = 0;
        int total2 = 0;
        int total = 0;
        int tempL1 = l, tempR1 = r;
        int tempL2 = l, tempR2 = r;
        for (int i = 0; i < v.size(); i++)
        {
            char op1 = v[i].first;
            int val1 = v[i].second;
            char op2 = v[i + 1].first;
            int val2 = v[i + 1].second;


            if (op1 == '+'){
                if (tempL1>=tempL2)
                {
                    tempL2 = val1;
                }else
                {
                    tempL1 = val1;
                    
                }
            }
            else if (op1 == 'x'){
                if (tempL1>=tempL2)
                {
                    tempL2 = tempL2*(val1-1);
                }else
                {
                    tempL1 = tempL1*(val1-1);
                }
             }
            if (op2 == '+'){
                if (tempL1>=tempL2)
                {
                    tempL2 = val2;
                }else
                {
                    tempL1 = val2;
                    
                }
            }
            else if (op2 == 'x'){
                if (tempL1>=tempL2)
                {
                    tempL1 = tempL1*(val2-1);
                }else
                {
                    tempR1 = tempL2*(val2-1);
                }
             }
            total = tempR1 + tempL1 + tempL2 + tempR2 ;

            if (total % 2 == 1)
            {
                tempR1 = total / 2;
                r = r + tempR1;
                tempL1 = (total + 1) / 2;
                l = l + tempL1;
            }
            else
            {
                tempR1 = total / 2;
                r = r + tempR1;
                tempL1 = total / 2;
                l = l + tempL1;
            }
        }
        cout << l + r << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<pair<char, int>> v;
//         for (int i = 0; i < n; i++) {
//             char a1, a2;
//             int b1, b2;
//             cin >> a1 >> b1 >> a2 >> b2;
//             v.push_back({a1, b1});
//             v.push_back({a2, b2});
//         }
//         int l = 1;
//         int r = 1;
//         for (int i = 0; i < v.size(); i += 2) {
//             char op1 = v[i].first;
//             int val1 = v[i].second;
//             char op2 = v[i + 1].first;
//             int val2 = v[i + 1].second;

//             if (op1 == '+') {
//                 l += val1;
//             } else if (op1 == 'x') {
//                 l *= val1;
//             }

//             if (op2 == '+') {
//                 r += val2;
//             } else if (op2 == 'x') {
//                 r *= val2;
//             }
//         }
//         cout << l + r << endl;
//     }
//     return 0;
// }


// 320
// 1899
// 1260
// 37464

// 4
// 3
// + 4 x 2
// x 3 x 3
// + 7 + 4
// 4
// + 9 x 2
// x 2 x 3
// + 9 + 10
// x 2 + 1
// 4
// x 2 + 1
// + 9 + 10
// x 2 x 3
// + 9 x 2
// 5
// x 3 x 3
// x 2 x 2
// + 21 + 2
// x 2 x 3
// + 41 x 3

// 32
// 75
// 103
// 167
