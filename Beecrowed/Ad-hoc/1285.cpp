#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, l;
    int count, c;
    int sum[4];
    int num;
    while (cin >> m >> n)
    {
        int d = 0;
        for (int i = m; i <= n; i++)
        {
            c = 0;
            count = 0;
            int num = i;
            while (num != 0)
            {
                sum[count] = num % 10;
                num = num / 10;
                count++;
            }
            for (int j = 0; j < count; j++)
            {
                for (int k = j + 1; k < count; k++)
                {
                    if (sum[j] == sum[k])
                    {
                        c = 1;
                    }
                }
            }
            if (c == 0)
            {
                d++;
            }
        }

        cout << d << endl;
    }

    return 0;
}
