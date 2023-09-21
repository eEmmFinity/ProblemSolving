#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text;
    getline(cin, text);
    int str = text.length();
    if (str <= 80)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
