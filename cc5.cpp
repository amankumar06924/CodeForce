// #include <bits/stdc++.h>
// using namespace std;
// void sub_set(vector<int>& v) {
//     int n = v.size();
//     for (int i = 0; i < (1 << n); i++) { 
//         vector<int> subset;
//         for (int j = 0; j < n; j++) {
//             if (i & (1 << j)) {
//                 subset.push_back(v[j]);
//             }
//         }
//         cout << "[";
//         for (int c : subset) {
//             cout << c;
//         }
//         cout << "],";
//     }
// }
// int main() {
//     vector<int> v = {1, 2, 3};
    
//     sub_set(v);
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
void sub_set(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < (1 << n); i++) { 
        vector<int> subset;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                subset.push_back(v[j]);
            }
            sub_set(subset);
            int sum = accumulate(subset.begin(),subset.end(),0);
            int avg = sum/subset.size();

        }

        cout << "[";
        for (int c : subset) {
            cout << c;
        }
        cout << "],";
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    vector<int> v;
	    for(int j=0;j<n;j++){
	        int input;
            cin>>input;
            v.push_back(input);
	    }
	    sort(v.begin(),v.end());
        sub_set(v);

	}

}