#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, k, m = 0, l;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        int arr[n];
        int a[n];
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[j];
        }
        bool zero = false;
        while (zero)
        {
            zero = false;
            int max = 0;
            for (int j = 1; j <= n; j++)
            {
                if (max < arr[j])
                {
                    max = arr[j];
                }
            }
            for (int j = 1; j <= n; j++)
            {
                if (arr[j] == max)
                {
                    arr[j] = arr[j] - k;
                    if (arr[j] <= 0)
                    {
                        zero = true;
                        a[m] = j;
                        m++;
                    }
                }
            }
        }
        for (int j = 1; j <= n; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
