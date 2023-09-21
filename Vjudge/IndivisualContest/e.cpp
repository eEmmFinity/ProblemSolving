#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        long long arr[x];
        for (int j = 1; j <= x; j++)
        {
            cin >> arr[i];
            if(arr[i]>=i){
                continue;
            }
            

        }
    }

    return 0;
}
