#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int max = 0, k;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
            k = i;
        }
    }
    cout << k << endl;
    return 0;
}
