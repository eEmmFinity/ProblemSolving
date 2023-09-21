#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    double a, b;
    cin >> a >> b;
    double sum;
    sum = ((b - a) / a) * 100.00;
    cout << sum << "%" << endl;
    return 0;
}
