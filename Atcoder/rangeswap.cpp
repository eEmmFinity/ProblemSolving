#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int p, q, r, s;
    cin >> n;
    cin >> p >> q >> r >> s;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {

        if ((p <= i) && (q >= i))
        {
            cout << arr[i + r - p] << " ";
        }

        else if ((r <= i) && (s >= i))
        {
            cout << arr[i + p - r] << " ";
        }
        else
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
