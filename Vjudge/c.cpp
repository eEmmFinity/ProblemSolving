#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long sum = pow(2, n) - 1;
        for (int i = 1; i <= sum; i++)
        {
            if (sum % i == 0)
            {
                for (int j = 1; j <= n; j++)
                {
                    if ((pow(2, j) - 1) == i)
                    {
                        cout << j << " ";
                        break;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}
