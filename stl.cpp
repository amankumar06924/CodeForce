#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    vector<int>v;
	    int n;
	    cin>>n;
	    for(int i = 0;i<n;++i){
            int x;
            cin>>x;
            v.push_back(x);
	    }
        if (n%2==1 && n%3==0)
        {
            cout<<v[(n+1)/2];
        }else if(n%2==0 && n%3==0){
            cout<<v[0]<<" "<<v[n-1]<<endl;
        }else{
            cout<<v[0] + v[n-1]<<endl;
        }
        
	}
    return 0;

}