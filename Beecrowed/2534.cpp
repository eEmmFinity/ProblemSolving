#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, a[100], b, temp = 0, c;
    while (cin >> x >> y)
    {
        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < x; j++)
            {
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        for (int i = 0; i < y; i++)
        {
            cin >> b;
            cout << a[b-1] << endl;
        }
    }
}