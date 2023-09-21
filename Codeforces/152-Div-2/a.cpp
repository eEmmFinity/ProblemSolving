#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int b, c, h;
    int ans, totalLayer;
    for (int i = 0; i < t; i++)
    {
        cin >> b >> c >> h;

        ans = h + c;
        if (b > ans)
        {
            totalLayer = ((ans * 2) + 1);
        }
        else
        {
            totalLayer = (b + (b - 1));
        }

        cout << totalLayer << endl;
    }

    return 0;
}
