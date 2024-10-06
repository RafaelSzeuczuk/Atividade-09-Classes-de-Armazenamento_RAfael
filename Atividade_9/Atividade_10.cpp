#include <iostream>
using namespace std;

int main()
{
    int a, b, *p1, *p2;
    p1 = &a;
    p2 = &b;
    if (p1 > p2)
        cout << "Variavel 'a' esta em um endereco de memoria mais alto." << endl;
        else if (p1 < p2)
        cout << "Variavel 'b' esta em um endereco de memoria mais alto." << endl;
            else
            cout << "Enderecos iguais!" << endl;
    return 0;
}