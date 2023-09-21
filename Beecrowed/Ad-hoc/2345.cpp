#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d,sum;
    cin >> a >> b >> c >> d;
    sum = abs(abs(a - b) - abs(c - d));
    cout << sum << endl;
    return 0;
}
