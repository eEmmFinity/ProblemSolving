#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool f = false;
    string s[10], str;
    string news = "";
    for (int i = 0; i <= n; i++)
    {
        getline(cin, s[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        cout << s[i] << endl;
    }
    cout << endl;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<=n; j++){
            str = s[i]+s[j];
            cout << str<<endl;
        }
    }
 

    return 0;
}
