#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long n;
    int c = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        c = 0;
        for (int j = 1; j <= n; j++)
        {
            if (n % j == 0)
            {
                c++;
            }
            else{
                break;
            }
        }
        cout << c << endl;
    }

    return 0;
}
