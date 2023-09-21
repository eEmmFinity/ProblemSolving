#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, sum;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum = 0;
        for (int j = 0; j < x; j++)
        {
            if (x % j == 0)
            {
                sum += j;
                if (sum > x)
                {
                    break;
                }
            }
        }
        if (sum == x)
        {
            cout << x << " eh perfeito" << endl;
        }
        else
        {
            cout << x << " nao eh perfeito" << endl;
        }
    }

    return 0;
}
