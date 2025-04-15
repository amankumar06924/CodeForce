#include <bits/stdc++.h>
using namespace std;

int n, z, x, t;

int main()
{
    cin>> t;
    while(t--)
    {
         cin >> n >> z;
         multiset<int> m_set;
         for(int i = 1; i <= n;i++) 
         {
             cin >> x;
             m_set.insert(x);
         }
           int sum=0LL,min_moves=0LL;
           while(m_set.size() && z>0)
           {
              min_moves++;
              int temp = *m_set.rbegin();
              m_set.erase(--m_set.end());
              z -= temp; temp/=2;
              if(temp>0) 
                m_set.insert(temp);
          }
          sort(m_set.begin(),m_set.end());
          if(z<=0)
          {
              cout<<min_moves << endl;
          }
          else 
          {
              cout<<"Evacuate"<<endl;
          }
    }
}
