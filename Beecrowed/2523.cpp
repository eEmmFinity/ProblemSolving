#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string letters;
    while (cin >> letters)
    {
        string latter;
        for (int i = 0; i < 26; i++)
        {
            latter[i + 1] = letters[i];
        }
        int n;
        cin >> n;
        int position;
        string str_two = "";
        for (int i = 0; i < n; i++)
        {
            cin >> position;
            cout << latter[position];
        }
        cout << endl;
    }
}
