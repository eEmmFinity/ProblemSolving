#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    double arr[12][12], sum = 0.0;
    int l = 1, m = 11;
    char C;
    cin >> C;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = l; j < m; j++)
        {
            sum += arr[i][j];
        }
        m--;
        l++;
    }

    if (C == 'S')
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum / 30.0 << endl;
    }
    return 0;
}
