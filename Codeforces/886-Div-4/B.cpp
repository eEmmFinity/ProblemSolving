#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, m;
    int k;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        int a[n], b[n];

        for (int j = 1; j <= n; j++)
        {
            cin >> a[j] >> b[j];
        }
        int max = 0;
        for (int j = 1; j <= n; j++)
        {
            if (a[j] <= 10 && b[j] > max)
            {
                max = b[j];
                k = j;
            }
        }
        cout << k << endl;
    }
    return 0;
}
