#include <iostream>
using namespace std;
int main (){
float mes,hora,ano;
    cout << "me diz o quanto voce ganha por hora: ";
    cin >> hora;
    cout << "me diz quantas horas voce trabalha por mes: ";
    cin >> mes;
    cout << "ganhas isso por mes: ";
    cout << (hora*mes) << endl;
    cout << "ganhas isso por ano: ";
    cout << (hora*mes)*12 << endl;

}
