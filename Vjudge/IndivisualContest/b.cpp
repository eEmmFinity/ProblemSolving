#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x, y;
    long long answer = 0;
    map<int, int> a, b;
    map<pair<int, int>, int> c;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        answer += a[x]++;
        answer += b[y]++;
        answer -= c[make_pair(x, y)]++;

        cout << "a[" << x << "] = " << a[x] << endl;
        cout << "b[" << y << "] = " << b[y] << endl;
        cout << "c[" << (x,y) << "] = " << c[make_pair(x,y)] << endl;
    }
    cout << "Final answer: " << answer << endl;
    return 0;
}
