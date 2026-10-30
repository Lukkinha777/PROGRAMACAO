#include <iostream>
using namespace std;

int main () {
int resultado = 0;
int i;

    for (int i=1; i<=10; i++){
        resultado += i;
    }
    i=11;
    do {
        resultado -= i;
        i++;
    } while (i<=15);

    while  (i<=20){
        i++;
    }
           if(i % 2==0){
                resultado = resultado / i;
            } else
                resultado = resultado * i;
                i++;

    cout << resultado;

return 0;
}

