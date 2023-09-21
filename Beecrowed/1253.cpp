#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    string str;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> str;
        cin >> b;
        for (int j = 0; str[j] != '\0'; j++)
        {
            if ((str[j] - b) < 65)
            {
                printf("%c", (str[j] - b) + 26);
            }
            else
            {
                printf("%c", (str[j] - b));
            }
        }
        cout << endl;
    }

    return 0;
}
