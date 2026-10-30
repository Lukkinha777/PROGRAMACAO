#include <iostream>
using namespace std;

int factorial(int numero) {
    if (numero == 1 || numero < 2) {
        return 1;
    } else{
        return numero * factorial (numero - 1 );
    }
}
int fibonacci (int numero2) {
    //if (numero)
}

int main () {
    int n = 2;
    float f1 = 5;
    float f2 = 2;
    float f3;
    float f4;
    f3 = (f2 + f1);
    f4 = (f3 + f2);
     cout << "factorial = " << factorial (n) << "\n";
     cout << "fibonacci = " << fibonacci (f1,f2) << "\n";
     return 0;
}

