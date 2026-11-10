#include <iostream>
using namespace std;

int main (){
    int n [10];
    int soma = 0;

    for (int i = 0; i <10; i++) {;
        cout << " introduza o n " << i+i << " numero inteiro ";
        cin >> n[i];7
    }
    for (int i = 0; i < 10; i++){
        soma+= n[i]*n[i];
    }
    cout << "soma dos quadrados dos valores " << soma;
    return 0;
}
