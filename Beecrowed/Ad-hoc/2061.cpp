#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b;
    int count;
    string str;
    cin >> a >> b;
    for (int i = 0; i < b; i++)
    {
        cin >> str;
        if (str == "fechou")
        {
            a++;
        }
        else
        {
            a--;
        }
    }
    cout << a << endl;

    return 0;
}
