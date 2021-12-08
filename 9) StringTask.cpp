#include <bits/stdc++.h>
using namespace std;

char intostring(int n)
{
    assert(n >= 1 && n <= 26);
    return "abcdefghijklmnopqrstuvwxyz"[n - 1];
}
int main()
{
    string str, str1;
    char x;
    getline(cin, str);
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] != 'Y' && str[i] != 'y' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            if ((int)str[i] < 91)
            {
                cout << "." << intostring((int)str[i] - 64);
            }
            else
            {
                cout << "." << str[i];
            }
        }
    }

    return 0;
}
