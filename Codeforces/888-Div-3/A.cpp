#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int m, n, k, h, diff, ans,d;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m >> k >> h;
        int arr[n];
        int count = 0;
        bool a = false;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            d = abs(h - arr[j]);
            for (int o = 1; o <= m; o++)
            {
                for (int l = o + 1; l <= m; l++)
                {
                    diff = abs(o - l);
                    ans = k * diff;
                    if (ans == d)
                    {
                        a = true;
                    }
                    else{
                        a = false;
                    }
                }
            }
            if(a == true){
                count++;
            }
        }
        cout << count<<endl;
        count = 0;
    }
    return 0;
}
