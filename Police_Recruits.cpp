#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int untreated_crimes = 0; 
    int available_officers = 0;
    
    for (int i = 0; i < n; i++)
    {
        int event;
        cin >> event;
        
        if (event == -1)
        {
            if (available_officers > 0)
            {
                available_officers--;
            }
            else
            {
                untreated_crimes++; 
            }
        }
        else
        {
            available_officers += event;
        }
    }

    cout << untreated_crimes << endl;

    return 0;
}
