#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> str;

    for (int i = 0; i < n; i++)
    {
        int a = 0, b = 0, c = 0, d = 0, e = 0;
        int count;
        for (int j = 0; j < 10; ++j)
        {
            for (int k = 0; k < 10; ++k)
            {
                string l;
                cin >> l;
                str.push_back(l);
                if (str[j][k] == 'X')
                {

                    count += 6 - max(abs(j - 4), abs(k - 4));
                }
            }
        }
        cout << count << endl;
        count = 0;
    }

    return 0;
}
