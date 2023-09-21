// Montery formatting
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string dollar, cent;
    int len_one, len_two;
    while (cin>>dollar && cin>>cent)
    {
  
        len_one = dollar.size();
        len_two = cent.size();
        cout << "$";
        for (int i = 0; i < len_one; ++i)
        {
            if ((len_one - i) % 3 == 0 && i > 0)
            {
                cout << ",";
            }
            printf("%c", dollar[i]);
        }
        cout << ".";
        if (len_two < 2)
        {
            cout << "0";
        }
        for (int i = 0; i < len_two; i++)
        {
            cout << cent[i];
        }
        cout << endl;
    }

    return 0;
}
