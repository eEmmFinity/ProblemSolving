#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    long long a, b, c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (a > b)
        {
            cout << "First" << endl;
        }
        else if (a == b)
        {
            if (c % 2 == 0)
            {
                cout << "Second" << endl;
            }
            else
            {
                cout << "First" << endl;
            }
        }
        else{
            cout << "Second"<<endl;
        }
    }

    return 0;
}
