#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int count = 0;
    int c = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "Against")
        {
            count++;
        }
        else if (s == "For")
        {
            c++;
        }
    }
    if (c > count)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
