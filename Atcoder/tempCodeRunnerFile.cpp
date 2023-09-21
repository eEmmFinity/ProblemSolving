#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cin >> str;
    int count = 0;
    bool flag = 0;
    string k;
    int size = str.length();

    if (str[0] != str[1] && str[1] != str[2] && str[0] != str[2])
    {
        cout << str[0] << endl;
    }
    if (str[0] == str[1] && str[1] != str[2] && str[0] != str[2])
    {
        cout << str[2] << endl;
    }
    if (str[0] == str[2] && str[1] != str[2] && str[0] != str[2])
    {
        cout << str[1] << endl;
    }
    if (str[0] == str[1] && str[1] == str[2] && str[0] == str[2])
    {
        cout << -1 << endl;
    }

    return 0;
}
