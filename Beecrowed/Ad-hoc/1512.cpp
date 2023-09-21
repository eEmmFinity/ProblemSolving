#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, temp, gcd, lcm, d;
    while (cin >> a >> b >> c)
    {
        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }
        if (c > b)
        {
            temp = c;
            c = b;
            b = temp;
        }
        for (int i = 1; i <= c; i++)
        {
            if (b % i == 0 && c % i == 0)
            {
                gcd = i;
            }
        }
        lcm = (b * c) / gcd;
        d = (a / b) + (a / c) - (a / lcm);
        cout << d << endl;
    }
    return 0;
}
