#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int recursion(int a)
{
    if (a <= 0)
    {
        return 1;
    }
    return a * recursion(a - 1);
}
int main()
{
    int a;
    cin >> a;
    int sum = recursion(a);
    cout << sum << endl;

    return 0;
}
