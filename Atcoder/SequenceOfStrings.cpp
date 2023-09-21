#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> str[i];
    }
    for (int i = n ; i > 0; i--)
    {
        cout << str[i]<<endl;
    }

    return 0;
}
