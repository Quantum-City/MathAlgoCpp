#include <iostream>
using namespace std;
int main()
{
    int n, k, i, str[49], count;
    i = 0;
    count = 0;
    cin >> n >> k;
    if (0 > k || k > n || n > 50)
    {
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        cin >> str[i];
        if (str[i] > 100)
        {
            return 0;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (str[i] == 0)
        {
            break;
        }
        if (str[k - 1] <= str[i])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
