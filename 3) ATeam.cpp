#include <iostream>
using namespace std;
int main()
{
    int n, i, count, count2, j;
    count = 0;
    count2 = 0;
    int str[1000][3];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> str[i][0];
        cin >> str[i][1];
        cin >> str[i][2];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (str[i][j] == 1)
            {
                count++;
            }
        }
        if (count > 1)
        {
            count2++;
        }
        count = 0;
    }
    cout << count2;
    return 0;
}
