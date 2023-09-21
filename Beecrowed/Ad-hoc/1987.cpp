#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum;
    long long str;

    while (cin >> n >> str)
    {

        sum = 0;
        while (str)
        {
            sum += str % 10;
            str /= 10;
        }

        if (sum % 3 == 0)
        {
            cout << sum << " sim" << endl;
        }
        else
        {
            cout << sum << " nao" << endl;
        }
    }

    return 0;
}
