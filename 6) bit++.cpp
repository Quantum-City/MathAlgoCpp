#include <iostream>
using namespace std;
int main()
{
    int x, n, i;
    string str[150];
    x = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for (i = 0; i < n; i++)
    {
        if (str[i] == "++X" || str[i] == "X++")
        {
            x++;
        }
        else if (str[i] == "--X" || str[i] == "X--")
        {
            x--;
        }
        else
        {
            return 0;
        }
    }
    cout << x;
    return 0;
}
