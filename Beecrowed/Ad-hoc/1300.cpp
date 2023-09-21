#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    while (cin >> n)
    {
        int j = 0;
        bool b = false;
        for (int i = 0; i < 60; i++)
        {
            if (i % 5 == 0)
            {
                j++;
            }
            a = i * 6 - j * 6;
            if (n == a || n == -a)
            {
                b = true;
                break;
            }
            else
            {
                b = false;
            }
        }
        if (b == true)
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
