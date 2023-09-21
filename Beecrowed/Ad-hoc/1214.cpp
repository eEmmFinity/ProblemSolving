#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << fixed << setprecision(3);
    int n, a, sum = 0, count = 0;
    double avg = 0.0, per = 0.0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        int b[a];
        for (int j = 0; j < a; j++)
        {
            cin >> b[j];
            sum += b[j];
        }
        avg = sum / a;
        for (int j = 0; j < a; j++)
        {
            if (b[j] > avg)
            {
                count++;
            }
        }
        per = (count * 100.00) / a;
        cout << per << "%" << endl;
        per = 0;
        avg = 0;
        sum = 0;
        count = 0;
    }

    return 0;
}
