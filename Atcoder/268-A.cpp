#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int count = 0;

    count++;
    if (a != b)
    {
        count++;
    }
    if (c != a && c != b)
    {
        count++;
    }
    if (d != a && d != b && d != c)
    {
        count++;
    }
    if (e != a && e != b && e != c && e != d)
    {
        count++;
    }
    cout << count << endl;
    return 0;
}
