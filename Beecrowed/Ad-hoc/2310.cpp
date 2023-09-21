#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << fixed << setprecision(2);
    int n;
    cin >> n;
    string str;
    int a, b, c, d, e, f;
    double suma = 0.0, sumb = 0.0, sumc = 0.0, sumd = 0.0, sume = 0.0, sumf = 0.0;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        cin >> a >> b >> c;
        cin >> d >> e >> f;
        suma += a;
        sumb += b;
        sumc += c;
        sumd += d;
        sume += e;
        sumf += f;
    }

    double pera, perb, perc;
    pera = (sumd * 100) / suma;
    perb = (sume * 100) / sumb;
    perc = (sumf * 100) / sumc;

    cout << "Pontos de Saque: " << pera << " %." << endl;
    cout << "Pontos de Bloqueio: " << perb << " %." << endl;
    cout << "Pontos de Ataque: "
         << " %." << perc << endl;

    return 0;
}
