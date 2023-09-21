// Letter Frequency
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
    int n, l = 0;
    int count[123], d = 0, p;
    scanf("%d%*c",&n);
    char str[201];
    for (int m = 0; m < n; m++)
    {
        scanf("%[^\n]%*c", &str);
        int k = 97;
        while (k <= 122)
        {
            count[k] = 0;
            k++;
        }
        int max = 0;
        int i = 0;
        for (; str[i] != '\0'; i++)
        {
            if (str[i] >= 65 && str[i] <= 90)
                str[i] += 32;
            if (str[i] >= 97 && str[i] <= 122)
            {
                p = str[i];
                count[p]++;
                if (count[p] > max)
                {
                    max = count[p];
                }
            }
        }
        for (char j = 'a'; j <= 'z'; j++)
        {
            if (count[j] == max)
                printf("%c", j);
        }
        cout << endl;
    }
}
