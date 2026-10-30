#include <iostream>
using namespace std;

int main (){
    int opcao;
    do
    {
        cout << "pode escolher as opcoes de 1 a 3\n ";
        cout << "\nincluindo que 0 sai do programa \n";
        cout << "\nescolha a sua opcao:\n ";
        cin >> opcao;

        switch (opcao)
        {
            case 0:
                cout << "Sair do programa\n";
                break;

            case 1:
                cout << ("e um bom programador\n");
                break;

            case 2:
                cout << ("e muito bom programador\n");
                break;

            case 3:
                cout << ("e excelente programador\n");
                break;

            default:
                cout << ("que bixo sabido \n");
        }

    }while (opcao != 0);

}


