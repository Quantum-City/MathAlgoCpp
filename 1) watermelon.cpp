#include <iostream>
using namespace std;
int main()
{
    int x, b;
    b = 2;
    cin >> x;
    if (x % 2 == 0)
    {
        x = x / 2;
        b = x - 1;
        if (x % 2 == 0)
        {
            cout << "YES";
        }
        else if (b > 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
