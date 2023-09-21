#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int e, f, g, h;
    if (a > b)
    {
        e = b;
    }
    else
    {
        e = a;
    }
    if (c > d)
    {
        f = d;
    }
    else
    {
        f = c;
    }
    e += f;
    g = min(max(a, b), max(c, d));
    if (g > e)
    {
        h = e;
    }
    else
    {
        h = g;
    }
    cout << h * h << endl;

    return 0;
}
