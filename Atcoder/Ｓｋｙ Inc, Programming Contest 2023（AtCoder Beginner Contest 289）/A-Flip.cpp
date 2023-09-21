#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            cout << "1";
        }
        if (s[i] == '1')
        {
            cout << "0";
        }
    }
    cout << endl;

    return 0;
}
