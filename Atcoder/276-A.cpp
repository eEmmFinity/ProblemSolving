#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int a = 0;
    cin >> s;
    int n = size(s);
    for (int i = n; i >= 1; i--)
    {
        if (s[i - 1] == 'a')
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
