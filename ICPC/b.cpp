#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int l, m, n;
    int n, q, x, y, z, z1, sum, winner, index1, index2;
    for (int i = 0; i < a; i++)
    {
        cin >> n;
        int playerScore[n];
        int j = 1;
        for (; j <= n; j++)
        {
            cin >> playerScore[j];
        }
        cin >> q;
        cin >> l >> x >> y;
        cin >> m >> z;
        cin >> n >> z1;
        for (int j = 1; i <= n; j++)
        {
            if (playerScore[x] > playerScore[y])
            {
                winner = x;
                z = x;
            }
            else
            {
                winner = y;
                z = y;
            }
        }
    }

    return 0;
}
