#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c;
    int x, y, z, sum = 0, p, q, r;
    cin >> a >> b >> c;
    cin >> x >> y >> z;

    if (x > a)
    {
        sum += x - a;
    }
    if (y > b)
    {
        sum += y - b;
    }
    if (z > c)
    {
        sum += z - c;
    }

    cout << sum << endl;

    return 0;
}
