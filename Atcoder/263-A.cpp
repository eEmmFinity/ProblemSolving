#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e;
    if ((a == b == c) && (d == e) || (a == b == d) && (c == e) || (a == b == e) && (c == d) || (b == c == d) && (a == e) || (b == c == e) && (a == d) || (b == d == e) && (a == c) || (c == d == e) && (a == b))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
