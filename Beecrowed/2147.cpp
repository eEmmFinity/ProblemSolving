#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    int count, n;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        double str3 = str.length();
        cout << str3 / 100.00 << endl;
    }

    return 0;
}
