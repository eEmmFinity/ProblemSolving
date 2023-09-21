#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    int sum = 1;
    for (int i = 0; i < b; i++)
    {
        sum *= a;
    }
    cout << sum << endl;

    return 0;
}
