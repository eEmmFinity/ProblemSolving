#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
int n;
cin>>n;
int sum,day;
for(int i = 0; i<n; i++){
    sum = 0;
    for(int j = 0; j<7; j++){
        cin>>day;
        sum+=day;

    }
    cout <<sum <<" ";
}
cout << endl;
return 0;
}
