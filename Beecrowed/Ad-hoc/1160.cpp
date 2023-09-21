#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Population Increase
int main()
{
    int n;
    cin >> n;
    int a, b;
    double c, d;
    int populationGrowtha, populationGrowthb;
    int count;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d;
        count = 0;
        while (1)
        {
            populationGrowtha = a + ((c / 100) * a);
            a = populationGrowtha;
            populationGrowthb = b + ((d / 100) * b);
            b = populationGrowthb;
            count++;
            if (count > 100)
            {
                cout << "Mais de 1 seculo." << endl;
                break;
            }
            if (a > b)
            {
                cout << count << " anos ." << endl;
                break;
            }
        }
    }

    return 0;
}
