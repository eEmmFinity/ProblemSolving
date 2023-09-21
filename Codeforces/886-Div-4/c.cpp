#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    string str = "";
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            for (int k = 0; k < 8; k++)
            {
                cin >> s[k];
                if (s[k] == '.')
                {
                    continue;
                }
                else
                {
                    str = str + s[k];
                }
            }
        }
        cout << str << endl;
        str = "";
    }
    return 0;
}
