// We need the Zero
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;

    while (t--)
    {
        cin >> n;
        long long arr[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int j = 0; j < 1000; j++)
        {
            for (int i = 0; i < n; i++)
            {
                b[i] = (arr[i] ^ j);
            }
            for (int i = 0; i < n; i++)
            {
                if (b[i] ^ b[i + 1] == 0)
                {
                    cout << "x";
                }
                b[i + 1] = b[i];
            }

        }
    }
    return 0;
}