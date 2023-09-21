#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int a, b, po;
    while (cin >> a >> b && a)
    {
        int p = 3 * a;
        int d = 0;
        for (int i = 0; i < b; i++)
        {
            cin >> str >> po;
            d += po;
        }

        cout << p - d << endl;
    }
    return 0;
}
