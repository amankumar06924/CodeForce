#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n;
    cin >> m;
    cin >> a;
    int len, breadth;
    int min_of_flagstones;
    if (n % a == 0){
        len = n / a;
    }
    else{
        len = (n / a) + 1;
    }
    if (m % a == 0){
        breadth = m / a;
    }
    else{
        breadth = (m / a) + 1;
    }
    min_of_flagstones = len* breadth;
    cout << min_of_flagstones << endl;

    return 0;
}