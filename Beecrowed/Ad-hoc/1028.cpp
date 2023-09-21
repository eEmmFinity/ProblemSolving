#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a, b, d, e, k, l, max;
    cin >> n;
    int arr[100], arrTwo[100];
    for (int i = 0; i < n; i++)
    {
        max = 0;
        cin >> a >> b;
        if (a < b)
        {
            l = a;
            k = b;
        }
        else
        {
            l = b;
            k = a;
        }
        while (k % l != 0)
        {
            e = k % l;
            k = l;
            l = e;
        }
        cout << l <<endl;
    }

    return 0;
}
