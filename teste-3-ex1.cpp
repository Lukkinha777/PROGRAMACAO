#include <iostream>
using namespace std;


int main (){
    int quantidade [5];
  double n, soma = 0.0;

    for (int i = 0; i < 5 ; i++){
        cout << "introduz o " << " numero inteiro ";
        cin >> n;
    }

    for (int i = 0; i < 5 ; i++){
        soma = soma + n ;
    }

    cout << "resultado de  " << quantidade << " e " << soma;

return 0;
}
