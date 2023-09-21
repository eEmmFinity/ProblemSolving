#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    int n;
    long long sum = 0;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                sum += arr[j] * arr[k];
            }
        }
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}
