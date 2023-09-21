#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    int s = b % a;
    int d = (b / a) + 1;
    int count = 0;
    if (a * 3 < b)
    {
        cout << n * a << endl;
    }
    else
    {
        count = n % 3;
        int sum = ((n / 3) * b) + (count * a);
        cout << sum << endl;
    }

    return 0;
}
