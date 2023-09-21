#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    string str, str2;
    int min;
    bool f;
    while (cin >> n && n)
    {
        int c = 2114;
        while (n--)
        {
            cin >> str >> a >> b;
            if (c > (a - b))
            {
                c = a - b;
                str2 = str;
            }
        }
        cout << str2 << endl;
    }

    return 0;
}
