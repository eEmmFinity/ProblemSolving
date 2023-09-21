#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;

    int count;
    char c;
    while (cin >> c)
    {
        cin >> s2;
        count = 0;
        if (c == '0' && s2[0] == '0')
        {
            break;
        }
        for (int i = 0; i < s2.length(); i++)
        {

            if (s2[i] == '0')
            {
                if (!count)
                {
                    cout << s2[i];
                }
            }
            else if (s2[i] != c)
            {
                cout << s2[i];
                count = 1;
            }
        }
        if (count == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << endl;
        }
    }
    return 0;
}
