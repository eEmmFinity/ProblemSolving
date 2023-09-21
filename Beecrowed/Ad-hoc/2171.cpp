#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    while (cin >> n && n != 0)
    {
        int k = 0;
        for (int i = 1; i + k <= n; i++)
        {
            k += i;
        }

        cout << k << " " << n - k << endl;
    }

    return 0;
}
