#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    while (1)
    {
        if (a % 4 == 2)
        {
            cout << a << endl;
            break;
        }
        else
        {
            a++;
        }
    }

    return 0;
}
