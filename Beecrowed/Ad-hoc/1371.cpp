#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    while (cin >> n && n)
    {
        a = 0;
        for (int i = 1; i <= n; i += 2)
        {
            a += i;
            if (a > n)
            {
                break;
            }
            if (i > 1)
            {
                cout << " ";
            }
            cout << a;
        }
        cout << endl;
    }

    return 0;
}
