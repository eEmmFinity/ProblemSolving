#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i >= k && i <= n)
        {
            cout << arr[i] << " ";
        }
        else if (i < k)
        {
            cout << 0 << " ";
        }
    }
    cout << endl;
    for (int i = n; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
