#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    int dis = (abs(c - a) + abs(d - b));
    int f = abs(k-dis);
    if (f & 1 || k<dis)
    {
      cout << "NO" << endl;
    }
    else
    {
      cout << "YES" << endl;
    }
  }

  return 0;
}