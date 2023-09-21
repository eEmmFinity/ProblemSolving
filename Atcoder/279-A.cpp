#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'v')
        {
            count++;
        }
        if (a[i] == 'w')
        {
            count += 2;
        }
    }
    cout << count << endl;

    return 0;
}
