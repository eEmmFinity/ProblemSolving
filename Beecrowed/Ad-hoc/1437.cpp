#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int counte = 1, countd = 0, N, L, S, O, sum = 0;
    while (cin >> n && n != 0)
    {
        string str;
        cin >> str;
        int i = 0;
        for (; i < str.length(); i++)
        {
            if (str[i] == 'D')
            {
                counte++;
                if (counte > 3)
                {
                    counte = 0;
                }
            }
            else if (str[i] == 'E')
            {
                counte--;
                if (counte == 0)
                {
                    counte = 3;
                }
            }
        }
        if (counte == 0)
        {
            cout << "N" << endl;
        }
        if (counte == 1)
        {
            cout << "L" << endl;
        }
        if (counte == 2)
        {
            cout << "S" << endl;
        }
        if (counte == 3)
        {
            cout << "O" << endl;
        }
    }

    return 0;
}
