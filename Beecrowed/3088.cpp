#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while (getline(cin, str))
    {
        
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ' ')
            {
                if (str[i + 1] == ',' || str[i + 1] == '.')
                {
                    continue;
                }
            }
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}
