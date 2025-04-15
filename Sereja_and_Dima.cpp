#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int s = 0, d = 0;
  bool turn = true;

  while (!arr.empty())
  {
    int chosen = (arr.front() >= arr.back()) ? arr.front() : arr.back();
    if (arr.front() >= arr.back()){
      arr.erase(arr.begin());
    }
    else{
      arr.pop_back();
    }

    if (turn){
      s += chosen;
    }
    else{
      d += chosen;
    }

    turn = !turn;
  }

  cout << s << " " << d << endl;
  return 0;
}
