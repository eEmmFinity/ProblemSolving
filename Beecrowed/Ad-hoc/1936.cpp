#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int i = 0;
    for (int i = 0; i < n; i++)
    {
    }
    do
    {
        sum += fact(i);
        i++;
    } while (sum == n);
    cout << i << endl;
    return 0;
}
