// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int>v;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         int arr[3];
//         for (int i = 0; i < 3; i++)
//         {
//             cin>>arr[i];
//             if (arr[i]==1)
//             {
//                 sum++;
//             }
//         }
//         if (sum>=2)
//         {
//             v.push_back(1);
//         }
//     }
//     int count_g = accumulate(v.begin(),v.end(),0);
//     cout<<count_g<<endl;
    
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5];
    int r;
    int k;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
            if (arr[i][j]==1)
            {
                r =i;
                k=j;
            }
        }
        
    }
    cout<<abs(2-r)+abs(2-k)<<endl;
    return 0;
}