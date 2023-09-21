#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n, t;
        cin >> n >> t;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int max = 0;
        int count = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= t)
            {
                if (b[i] > max)
                {
                    max = b[i];
                    count = i+1;
                }
            }
            t--;
        }
        cout << count << endl;
    }

    return 0;
}
