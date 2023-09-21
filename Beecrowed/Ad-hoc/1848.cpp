#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    int c = 1;
    int sum = 0;
    while (c <= 3)
    {
        getline(cin, n);
        if (n[0] == 'c')
        {
            cout << sum << endl;
            c++;
            sum = 0;
        }
        else
        {
            if (n == "---")
            {
                sum += 0;
            }
            else if (n == "--*")
            {
                sum += 1;
            }
            else if (n == "-*-")
            {
                sum += 2;
            }
            else if (n == "-**")
            {
                sum += 3;
            }
            else if (n == "*--")
            {
                sum += 4;
            }
            else if (n == "*-*")
            {
                sum += 5;
            }
            else if (n == "**-")
            {
                sum += 6;
            }
            else if (n == "***")
            {
                sum += 7;
            }
        }
    }

    return 0;
}
