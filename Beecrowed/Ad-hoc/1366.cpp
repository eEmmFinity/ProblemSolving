#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a, b;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            count += b / 2;
        }
        cout << count / 2 << endl;
    }
    return 0;
}