#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    while (cin >> n >> k && n && k)
    {
        int a[n];
        int count;
        int l = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < 101; i++)
        {
            count = 0;
            for (int j = 0; j < n; j++)
            {
                if (i == a[j])
                {
                    count++;
                }
            }
            if (count >= k)
            {
                l++;
            }
        }
        cout << l << endl;
    }
    return 0;
}
