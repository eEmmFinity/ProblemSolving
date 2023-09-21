#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,len_three;
    int len[51];
    string str[50];
    int max = 0, flag = 0;
    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        if (flag == 1)
        {
            cout << endl;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
            len[i] = str[i].length();
            if (len[i] > max)
            {
                max = len[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            len_three = max - str[i].length();
            for (int k = 0; k < len_three; k++)
            {
                cout << " ";
            }
            cout << str[i] << endl;
        }

        max = 0;
        flag = 1;
    }
    return 0;
}
