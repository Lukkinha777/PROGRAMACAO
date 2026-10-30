#include <iostream>
using namespace std;

int main () {
    int h1,h2,resultado;

    cout << "me diz quanto voce ganha por hora: ";
    cin >> h1;
    cout << "e quantas horas voce trabalha por mes: ";
    cin >> h2;
    resultado = h1*h2;
    cout << resultado << " euros Por mes\n";
    cout << resultado*12 << " euros Por ano";
}
