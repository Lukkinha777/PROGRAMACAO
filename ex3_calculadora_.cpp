#include <iostream>

using namespace std;

int main () {
string operacao;
float n1,n2;
float calculo;

cout<< "operacoes possiveis:\n";
cout<< "somar\n";
cout<< "subtrair\n";
cout<< "multiplicar\n";
cout<< "dividir\n";

cout<< "diga qual operacao quer efetuar: ";
cin>> operacao;
cout<< "diz o 1.num ";
cin>> n1;
cout<< "diz o 2.num ";
 cin >> n2;

 if (operacao == "somar") {
    cout << "soma = " << (n1+n2);
 }
  else if (operacao == "subtrair") {
    cout << "subtracao = " << (n1-n2);
 }
 else if (operacao == "multiplicar") {
  cout << "multiplicacao = " << (n1 * n2);
  }
 else if (operacao == "dividir") {
 if (n2 == 0) {
    cout << "Impossivel fazer o calculo";
 }else {
    calculo = (n1) / (n2);
    cout << "divisao = " << calculo;
 }
 }


}




