#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum;
    bool f;
    while (cin >> n)
    {
        f = false;
        int a = 0;
        int b = sqrt(n);
        while (b >= a)
        {
            sum = pow(a, 2) + pow(b, 2);
            if (sum == n)
            {
                f = 1;
                break;
            }
            else if (sum > n)
            {
                b--;
            }
            else
            {
                a++;
            }
        }
        if (f == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
