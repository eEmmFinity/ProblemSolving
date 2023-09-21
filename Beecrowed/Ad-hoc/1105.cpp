#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b, n, x, y, z;
    int c;
    while (cin >> b >> n && b && n)
    {
        int a[b];
        c = 0;
        for (int i = 0; i < b; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y >> z;
            a[x] -= z;
            a[y] += z;
        }
        for (int i = 0; i < b; i++)
        {
            if (a[i] < 0)
            {
                c = 1;
                break;
            }
        }
        if (c == 1)
        {
            cout << "N" << endl;
        }
        else
        {
            cout << "Y" << endl;
        }
    }

    return 0;
}
