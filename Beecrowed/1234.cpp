#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int a, b;
    while (getline(cin, str))
    {
        a = 0;
        for (int i = 0; str[i] != '\0'; i++)
        {

            if (str[i] != ' ')
            {
                if (a == 0)
                {
                    a = 1;
                    cout << (char)toupper(str[i]);
                }
                else
                {
                    a = 0;
                    cout << (char)tolower(str[i]);
                }
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
