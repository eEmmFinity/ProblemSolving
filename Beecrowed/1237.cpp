#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string one, two;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> one >> two;
        for (int j = 0; j < 50; j++)
        {
            if (one[j] == one.length() && two[j] == two.length())
            {
                break;
            }
            cout << one[j];
            cout << two[j];
        }
        one = "";
        two = "";
        cout << endl;
    }
    return 0;
}
