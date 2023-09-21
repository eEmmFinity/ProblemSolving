#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int a = s.length();
        if (s.length() <= 10)
        {
            cout << s << endl;
        }
        else
        {
            cout << s[0] << s.length() - 2 << s[a - 1] << endl;
        }
    }

    return 0;
}
