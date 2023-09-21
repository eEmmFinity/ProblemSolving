#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    bool a, b;
    char c;
    while (getline(cin, str))
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        if (str == "*")
        {
            break;
        }
        c = str[0];
        a = true;
        b = false;
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] != ' ' && b == false)
            {
                if (c != str[i])
                {
                    a = false;
                }
                b = true;
            }
            else
            {
                if (str[i] == ' ')
                    b = false;
            }
        }
        if (a)
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
    return 0;
}
