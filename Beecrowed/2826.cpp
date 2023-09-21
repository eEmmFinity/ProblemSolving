#include <iostream>
#include <bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{

    string one, two;
    cin >> one >> two;

    if (one.compare(two) > 0)
    {
        cout << two << endl;
        cout << one << endl;
    }
    else if (one.compare(two) < 0)
    {
        cout << one << endl;
        cout << two << endl;
    }

    return 0;
}
