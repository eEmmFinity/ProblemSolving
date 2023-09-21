#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int arr[n];
        int count = 0;
        double temp = 0;
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[j];
        }

        for (int j = 1; j <= n; j++)
        {
            if (arr[j] == j)
            {
                count++;
            }
        }
        temp = ceil(count / 2.0);
        cout << temp << endl;
    }

    return 0;
}
