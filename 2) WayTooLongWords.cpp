#include <iostream>
using namespace std;
int main()
{
    int n, i;
    string str[100];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for (i = 0; i < n; i++)
    {
        if (str[i].length() > 10)
        {
            cout << str[i][0] << str[i].length() - 2 << str[i][str[i].length() - 1] << endl;
        }
        else
        {
            cout << str[i] << endl;
        }
    }
    return 0;
}
