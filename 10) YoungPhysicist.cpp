#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, f[100][3], i, j, sum = 0;
    cin >> n;
    if (n < 0 || n > 100)
    {
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        cin >> f[i][0];
        cin >> f[i][1];
        cin >> f[i][2];
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum = f[j][i] + sum;
        }
        if (sum != 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
