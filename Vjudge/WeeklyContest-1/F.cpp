#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  n, m;
    cin >> n >> m;
    long long  a[m];
    long long sum = 0;
    long long k = 1;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        if (a[i] >= k)
        {
            sum += a[i] - k;
        }
        else
        {
            sum += n - (k - a[i]);
        }
        k = a[i];
    }
    cout << sum << endl;

    return 0;
}
