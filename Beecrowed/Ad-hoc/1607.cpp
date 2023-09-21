#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int sum, s;
    string a, b;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        for (int i = 0; a[i]; i++)
        {
            s = b[i] - a[i];
            if (s < 0)
            {
                sum += s + 26;
            }
            else
            {
                sum += s;
            }
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}
