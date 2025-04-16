#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        string S;
        cin >> N >> S;

        int b = 0, g = 0;

        for (char c : S)
        {
            if (c == 'B')
            {
                b++;
            }
            else if (c == 'G')
            {
                g++;
            }
            if (b > 2 * g)
            {
                break;
            }
        }

        cout << b + g << endl;
    }

    return 0;
}
