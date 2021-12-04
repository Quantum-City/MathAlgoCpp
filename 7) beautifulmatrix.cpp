#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int mtx[5][5], i, j, dis;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> mtx[i][j];
            if (mtx[i][j] == 1)
            {
                dis = abs(2 - i) + abs(2 - j);
            }
        }
    }
    cout << dis;
    return 0;
}
