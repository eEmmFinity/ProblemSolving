#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    long long b, l, four, fifteen, fiftyFive, hundred, fourHundread;
    char x[1000001];
    bool h = false;
    while (cin>>x)
    {
        if (h)
        {

            cout << endl;
        }
        h = true;
        b = l = four = fifteen = fiftyFive = hundred = fourHundread = 0;
        for (int i = 0; i < strlen(x); i++)
        {
            four = ((four * 10) + (x[i] - '0')) % 4;
            fifteen = ((fifteen * 10) + (x[i] - '0')) % 15;
            fiftyFive = ((fiftyFive * 10) + (x[i] - '0')) % 55;
            hundred = ((hundred * 10) + (x[i] - '0')) % 100;
            fourHundread = ((fourHundread * 10) + (x[i] - '0')) % 400;
        }
        if ((four == 0 && hundred != 0) || (fourHundread == 0))
        {
            cout << "This is leap year." << endl;
            b = l = true;
        }
        if (fifteen == 0)
        {
            cout << "This is huluculu festival year." << endl;
            l = true;
        }
        if (fiftyFive == 0 && b == 1)
        {
            cout << "This is bulukulu festival year." << endl;
        }
        if (l == 0)
        {
            cout << "This is an ordinary year." << endl;
        }
    }
    return 0;
}