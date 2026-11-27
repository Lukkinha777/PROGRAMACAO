#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> numeros;
    int num;
    int soma = 0;

    cout << "Digite numeros para eu poder somar (0 para parar): ";
    cin >> num;

    while (num != 0) {
        numeros.push_back(num);
        
        cout << "Digite um numero (0 para parar): ";
        cin >> num;
    }

   
    for (int n : numeros) {
        soma = soma + n;
    }

    cout << "A soma dos numero que voce colocou:  " << soma << "\n";

    return 0;
}