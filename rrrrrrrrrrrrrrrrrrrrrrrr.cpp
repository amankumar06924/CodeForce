// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    string s;
// 	    cin>>s;
// 	    int n = s.size();
// 	    int c = 0;
// 	    for(int i =0;i<n/2;i++){
// 	        if(s[i]!=s[n-1-i]){
// 	            c++;
// 	        }
// 	    }
// 	    cout<<c<<endl;
// 	}
// 	return 0;

// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	// int t;
// 	// cin>>t;
// 	// while(t--){
// 	//     string s;
// 	//     cin>>s;
// 	//     int n = s.size();
// 	//     int c = 0;
// 	//     for(int i =0;i<n/2;i++){
// 	//         if(s[i]!=s[n-1-i]){
// 	//             c++;
// 	//         }
// 	//     }
// 	//     cout<<c<<endl;
//     cout<<(3^1);
// 	// }
// 	return 0;

// }
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
        int n = s.size();
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(s[i]);
        }
        
        int count1 = count(v.begin(),v.end(),1);
        int c = 0;
        for(int i =0;i<n/2;i++){
            if(s[i]!=s[n-1-i]){
                c++;
            }
        }
	    
        if(c==n/2){
            cout<<0<<endl;
        }else{
           cout<<(count1 -1)/2<<endl;

       }
	}
	return 0;

}

