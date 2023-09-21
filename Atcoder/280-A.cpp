#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    string s;
    cin >> a >> b;
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> s[j];
            if (s[j] == '#')
            {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}
