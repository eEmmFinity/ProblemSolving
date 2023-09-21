#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        cin >> m;
        if (s == "Thor")
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }

    return 0;
}
