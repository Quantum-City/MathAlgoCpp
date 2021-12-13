#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, r, q[] = {47, 74, 44, 77, 444, 777, 447, 477, 474, 747, 774, 744};
    r = sizeof(q) / sizeof(int);
    cin >> n;
    if (n % 4 == 0 || n % 7 == 0)
    {
        cout << "YES";
        return 0;
    }
    else
    {
        for (i = 0; i < r; i++)
        {
            if (n % q[i] == 0)
            {
                cout << "YES";
                return 0;
            }
        }
        cout << "NO";
    }
    return 0;
}
