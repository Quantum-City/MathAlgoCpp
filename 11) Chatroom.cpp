#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello", ss;
    cin >> ss;
    int j = 4;
    for (int i = ss.size() - 1; i >= 0; i--)
    {
        if (ss[i] == s[j])
        {
            s.pop_back();
            j--;
            if (j == -1)
                break;
        }
    }
    if (s.size() > 0)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
