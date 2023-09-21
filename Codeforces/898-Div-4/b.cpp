#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        long long n;
        cin >> n;
        long long v[n];
        int j;
        for (j = 0; j < n; j++)
        {
            cin >> v[j];
        }
        int min = v[0];
        int k = j;
        long long ans = 1;
        for (j = 0; j < n; j++)
        {
            if (min > v[j])
            {
                min = v[j];
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (min == v[j])
            {
                v[j] = v[j] + 1;
                break;
            }
        }
        for (j = 0; j < n; j++)
        {
            ans *= v[j];
        }
        cout << ans << endl;
    }
    return 0;
}
