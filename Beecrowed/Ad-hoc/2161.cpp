#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << fixed << setprecision(10);
    double a = 0.0;
    int b;
    cin >> b;
    if (b == 0)
    {
        a = 0.0000000000;
    }
    if (b == 1)
    {
        a = 0.1666666667;
    }
    for (int i = 2; i <= b; i++)
    {
        if (i == 2)
        {
            a = 6.0 + (1.00 / 6.00);
            a = 1.0 / a;
        }
        else
        {
            a = 6.00 + a;
            a = 1.0 / a;
        }
    }
    a = a + 3.00;
    cout << a << endl;
    printf("%.10lf\n",a);

    return 0;
}
