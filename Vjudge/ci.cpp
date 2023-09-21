#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    vector<int> v;
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum1 < sum2)
        {
            sum1 += v[i];
        }
        else
        {
            sum2 += v[i];
        }
    }
    int diff = abs(sum1 - sum2);
    cout << diff << endl;

    return 0;
}
