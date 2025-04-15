#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int diet[n];
        for (int i = 0; i < n; i++)
        {
            cin>>diet[i];
        }
        
        int count = 0;
        vector<int>v;
        for (int i = 0; i < n; i++){
            count = (count + diet[i])-k;
            v.push_back(count);
        }
        bool repeat = false;
        for (int i=0;i<n;i++) {
            if (v[i]<0) {
                cout << "NO" << endl;
                repeat = true;
                break;
            }
        }
        if (!repeat) {
            cout << "YES" << endl;
        }
    }
return 0;
}