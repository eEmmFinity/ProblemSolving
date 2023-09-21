#include <iostream>

using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int a, b;
    cin >> a >> b;

    int area, s, type1;
    area = a * b;
    s = (a - 1) * 2 + (b - 1) * 2;
    type1 = area * 2 - (s / 2 + 1);
    cout << type1 << endl;
    cout << s << endl;

    return 0;
}