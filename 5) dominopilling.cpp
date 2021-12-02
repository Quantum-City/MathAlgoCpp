#include <iostream>
using namespace std;
int main()
{
    int m, n, i;
    cin >> m >> n;
    if (0 > m || 0 > n || m > 16 || n > 16 || m > n || (m == 1 && n == 1))
    {
        cout << 0;
        return 0;
    }
    else if (m % 2 == 0)
    {
        i = n * (m / 2);
    }
    else
    {
        i = n * (m / 2) + n / 2;
    }
    cout << i;
    return 0;
}
