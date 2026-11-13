#include <iostream>
using namespace std;
double  multiplica2Nums(int a,int b){
    int resultado;
    cout << "( e o resultado que deu na multiplicacao ) " << "resultado e: ";
    return (double) a * b;
}
int main (){
    int num1,num2;
    cout << "primeiro numero para multiplicar:  ";
    cin >> num1;
    cout << "segundo numero: ";
    cin >> num2;
    double resultado = multiplica2Nums(num1,num2);
    cout << " = " << resultado;

return 0;
}
