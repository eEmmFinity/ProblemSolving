#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b;
    cin>>a>>b;
    string str = "atcoder";
    for(int i = a-1; i<b; i++){
        cout << str[i];
    }
    cout << endl;


return 0;
}
