// convert decimal 32bit to binary
// Add two binary number
// Change them back to decimal
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int unsigned long a, b;
    while (cin >> a >> b)
    {
        printf("%lu\n", a ^ b);
    }
    return 0;
}
