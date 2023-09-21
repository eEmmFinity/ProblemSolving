#include <iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        string str = to_string(x);
        string c_str = "";
        for (size_t j = 0; j < str.length(); ++j)
        {
            if (str[j] - '0' >= 5)
            {
                c_str += to_string(str[i] + 1);
                break;
            }
            else
            {
                c_str += str[j];
            }
        }
       
    }
    return 0;
}
