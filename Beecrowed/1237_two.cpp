#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string one, two;
    int a, b, c, d;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> one >> two;
        a = 0;
        b = 0;
        for (int j = 0; j < 50; j++)
        {
            if (one[j] == '\0')
            {
                a = 1;
            }
            if (two[j] == '\0')
            {
                b = 1;
            }
            if (a == 1 && b == 1)
            {
                break;
            }
            if (a == 0)
                cout << one[j];
            if (b == 0)
                cout << two[j];
        }
        cout << endl;
    }
    return 0;
}
