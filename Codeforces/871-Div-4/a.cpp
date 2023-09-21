#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "codeforces";
    string s2;
    int n;
    cin >> n;
    int count = 0;
    for (int j = 0; j < n; j++)
    {
        cin >> s2;
        for (int i = 0; i < s2.length(); i++)
        {
            if (s2[i] != s[i])
            {
                count++;
            }
        }

        cout << count << endl;
        count = 0; 
    }

    return 0;
}
