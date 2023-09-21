#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int temp = 0;

    for (int i = 49; i < 52; i++)
    {
        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] == i)
            {
                cout << str[j];
                temp++;
                if (temp != str.length())
                {
                     temp++;
                     cout<<"+";
                }
                else
                {
                    cout << "";
                }
            }
        }
    }
    cout << endl;
    return 0;
}
