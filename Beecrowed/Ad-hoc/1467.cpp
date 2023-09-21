#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        if (a == b && b == c)
        {
            cout << "*" << endl;
        }
        if (a == b && a != c && b != c)
        {
            cout << "C" << endl;
        }
        if (b == c && a != c && a != c)
        {
            cout << "A" << endl;
        }
        if (a == c && a != b && c != b)
        {
            cout << "B" << endl;
        }
    }
    return 0;
}
