#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << fixed << setprecision(1);
    int l;
    double arr[12][12], sum = 0.0;
    char c;
    cin >> c;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 12; i++)
    {
        sum += arr[i][l];
    }
    if (c == 'S')
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum / 12.0 << endl;
    }
    
    return 0;
}