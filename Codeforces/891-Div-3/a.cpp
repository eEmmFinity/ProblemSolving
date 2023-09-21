#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x;
    for (int i = 0; i < t; ++i)
    {
        cin >> x;
        int arr[x];
        int sum = 0;
        for (int j = 1; j <= x; j++)
        {
            cin >> arr[j];
            sum += arr[j];
        }
        if (sum % 2 == 0)
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
