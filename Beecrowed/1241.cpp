#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, k, count;
    cin >> n;
    string num_one, num_two;
    string dnew_tring;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        cin >> num_one;
        cin >> num_two;
        int len_one = num_one.length();
        int len_two = num_two.length();
        for (int j = len_two, i = len_one; j >= 0; j--, i--)
        {
            if (num_one[i] == num_two[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if (count == len_two + 1)
        {
            cout << "encaixa" << endl;
        }
        else
        {
            cout << "nao encaixa" << endl;
        }
    }

    return 0;
}
