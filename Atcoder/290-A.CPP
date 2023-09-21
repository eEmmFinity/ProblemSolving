#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m];
    int arre[n];
    int k;
    int sum = 0;
    for (int i = 1; i <= m; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> arre[i];
        k = arre[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arre[i] == j)
            {
                sum += arr[j];
            }
        }
    }
    cout << sum << endl;
    return 0;
}
