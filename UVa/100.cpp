#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    int temp;
    while (scanf("%d %d", &i, &j) != EOF)
    {
        int count = 1, max = 0, x;
        int a = i, b = j;
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        while (a <= b)
        {
            x = a;
            while (x != 1)
            {
                if (x % 2 == 0)
                {
                    x = x / 2;
                }
                else
                {
                    x = 3 * x + 1;
                }
                count++;
                if (x == 1)
                {
                    break;
                }
            }
            if (count > max)
            {
                max = count;
            }
            count = 1;
            a++;
        }

        cout << i << " " << j << " " << max << endl;
    }

    return 0;
}
