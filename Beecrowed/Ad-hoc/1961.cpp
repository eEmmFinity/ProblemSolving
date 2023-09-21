#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, sum = 0;
    cin >> x >> y;
    int arr[y];
    bool f = false;
    for (int i = 0; i < y; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < y; i++)
    {

        if (arr[i] > arr[i - 1])
        {
            sum = arr[i] - arr[i - 1];
        }
        else
        {
            sum = arr[i - 1] - arr[i];
        }
        if (sum <= x)
        {
            f = 1;
        }
        else
        {
            f = 0;
            break;
        }
    }

    if (f == 1)
    {
        cout << "YOU WIN" << endl;
    }
    else
    {
        cout << "GAME OVER" << endl;
    }

    return 0;
}
