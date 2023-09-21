#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, k;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum_one = 0;
    int sum_two = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum_one < sum_two)
        {
            sum_one += arr[i];
        }
        else
        {
            sum_two += arr[i];
        }
    }
    int diff = abs(sum_one - sum_two);
    cout << diff << endl;

    return 0;
}
