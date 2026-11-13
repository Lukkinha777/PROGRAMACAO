#include <iostream>
using namespace std;
void mostraNumsESoma(int a, int b, int c){
    int soma = a + b + c;
    cout << " da... " << soma;
}
int main (){
    int n1,n2,n3 ;
    cout  << " me de numeros para poder somar ";
    cin >> n1;
    cout  << " agora o proximo numero ";
    cin >> n2;
    cout << "se quiser fazer soma de 3 digitos coloque o valor aqui, caso nao escreva 0:  ";
    cin  >> n3;
    cout << n1;
    cout << "\n" <<  n2;
    cout << "\n" << n3;
    mostraNumsESoma(n1,n2,n3);
return 0;
}
