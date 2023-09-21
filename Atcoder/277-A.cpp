#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == b)
        {
            cout << i + 1 << endl;
        }
    }

    return 0;
}
