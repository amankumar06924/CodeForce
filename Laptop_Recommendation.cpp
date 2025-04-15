#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        map<int, int> m;
        for (int i = 0; i < n; i++) {
            m[arr[i]]++;
        }
        int max_count = 0;
        int max_elem = -1;
        bool unique = true;
        for (auto &r : m) {
            if (r.second > max_count) {
                max_count = r.second;
                max_elem = r.first;
                unique = true;
            } else if (r.second == max_count) {
                unique = false;
            }
        }
        if (unique) {
            cout << max_elem << endl;
        } else {
            cout << "CONFUSED" << endl;
        }
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s, r;
        cin >> s >> r;
        int ct0 = count(s.begin(), s.end(), '0');
        int ct1 = count(s.begin(), s.end(), '1');
        int ctr0 = count(r.begin(), r.end(), '0');
        int ctr1 = count(r.begin(), r.end(), '1');
        if(ct0==ctr0 && ct1==ctr1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,zero=0,one=0,zero1=0,one1=0;
        cin>>a;
        string s,s1;
        cin>>s>>s1;
        for(int i=0; i < s.size(); i++)
        {
            if(s[i]=='0')zero++;
            else if(s[i]=='1')one++;
        }
        for(int i=0; i < s1.size(); i++)
        {
            if(s1[i]=='0')zero1++;
            else if(s1[i]=='1')one1++;
        }
        if(zero==zero1 && one==one1 )cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
