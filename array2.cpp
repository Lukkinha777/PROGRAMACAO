#include <iostream>
using namespace std;

int main (){
    int quantidade;
    double numero ,soma=0.0;
    cout << "quantos numeros quer somar?"<< endl;
    cin >> quantidade;
    for (int i = 0; i < quantidade; i++){
        cout << "introduz o  " << i+1 << " numero ";
        cin >> numero;
        soma+=numero;
}
    cout << "o resultado dos " << quantidade << " da " << soma;
return 0;
}


