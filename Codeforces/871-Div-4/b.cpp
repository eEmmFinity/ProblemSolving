#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    int count = 0;
    int k;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        int b[a];
        for (int j = 0; j < a; j++)
        {
            cin >> b[i];
            if (b[i] == 0)
            {
                count++;
                if (count > k)
                {
                    k = count;
                }
            }
            else
            {
                count = 0;
            }
        }
        cout << k << endl;
        count = 0;
    }
    return 0;
}
