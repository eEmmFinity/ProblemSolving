#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[20];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s = 1000000;
    for (int i = (1 << (n - 1)) - 1; i >= 0; --i)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += arr[j];
            }
            else
            {
                sum -= arr[j];
            }
        }
        s = min(s, abs(sum));
    }
    cout << s << endl;
    return 0;
}
