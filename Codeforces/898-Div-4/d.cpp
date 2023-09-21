#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        int count = 0;
        int min_count = 0;
        cin >> x >> y;
        cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == 'B')
            {
                count++;
            }
            if (count >= y)
            {
                min_count++;
                count -= y;
            }
        }

        cout << min_count << endl;
    }

    return 0;
}
