#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <list>
#define MAX 1000
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;
    string s;
    string temp;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        for (int j = 0; j < a; j++)
        {
            cin >> s[i];
            s[i] = tolower(s[i]);
            temp = s[i];
            if (s[i] == s[i + 1])
            {
                continue;
            }
            else
            {
                temp = s[i];
            }
        }
        cout << temp << endl;
    }

    return 0;
}
