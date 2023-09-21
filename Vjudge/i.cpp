#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, i, k;
    cin >> n;
    int arr[n];
    int sum;
    int temp;
    int a[3434];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = abs(arr[0] - arr[1]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            k = arr[i];
            sum = abs(k - arr[j]);
            if (sum < min)
            {
                min = sum;
            }
        }
    }
    cout << min << endl;

    return 0;
}
