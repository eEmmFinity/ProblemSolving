#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s[0] == 'o' && s[1] == 'n' && s.length() == 3 || s[0] == 'o' && s[2] == 'e' && s.length() == 3 || s[1] == 'n' && s[2] == 'e' && s.length() == 3)
        {
            cout << "1" << endl;
        }
        if (s[0] == 't' && s[2] == 'o' && s.length() == 3 || s[0] == 't' && s[1] == 'w' && s.length() == 3 || s[1] == 'w' && s[2] == 'o' && s.length() == 3)
        {
            cout << "2" << endl;
        }
        if (
            s[0] == 't' && s[1] == 'h' && s[2] == 'r' && s[3] == 'e' && s.length() == 5 ||
            s[0] == 't' && s[1] == 'h' && s[2] == 'r' && s[4] == 'e' && s.length() == 5 ||
            s[0] == 't' && s[1] == 'h' && s[3] == 'e' && s[4] == 'e' && s.length() == 5 ||
            s[0] == 't' && s[2] == 'r' && s[3] == 'e' && s[4] == 'e' && s.length() == 5 ||
            s[1] == 'h' && s[2] == 'r' && s[3] == 'e' && s[4] == 'e' && s.length() == 5)
        {
            cout << "3" << endl;
        }
    }

    return 0;
}