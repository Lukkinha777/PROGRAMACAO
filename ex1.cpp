#include <iostream>
using namespace std;
int main () {

int numero;
cout << "me diz 1 numero ";
cin >> numero;

    if (numero <0 ){
    cout << "Numero negativo";
    }

   else if (numero == 0 ){
    cout << "Numero neutro";
    }

    else if (numero <100 ){
    cout << "Numero positivo pequeno";
    }

    else{
        cout << "numero enorme";
    }


return 0;
}
