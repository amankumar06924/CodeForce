#include <bits/stdc++.h>
using namespace std;
string dig;
string inttostring(int n)
{
    string str;
    while (n)
    {
        int tem = n % 10;
        str += tem + '0';
        n /= 10;
    }
    reverse(str.begin(), str.end());
    return str;
}
void stringlinr()
{
    for (int i = 0; i <= 10000; i++)
    {
        dig += inttostring(i);
    }
}

int main()
{
    stringlinr();
    int n;
    cin >> n;
    cout << dig[n - 1];
    return 0;
}