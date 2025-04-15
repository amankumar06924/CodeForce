#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,};
    set<int>v;
    for (int i = 1; i < 10; i+=2)
    {
        v.insert(arr[i]+ arr[i-1]);
    }
    cout<<v.size()<<endl;
return 0;
}