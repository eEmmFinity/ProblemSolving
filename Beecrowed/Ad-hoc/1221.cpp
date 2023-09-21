#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool prime(long long n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    long long a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (prime(a))
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Not Prime" << endl;
        }
    }

    return 0;
}
