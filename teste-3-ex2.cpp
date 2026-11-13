#include <iostream>
#include <string.h>
using namespace std;

int main (){
char nome[5];

cout << "Nome: ";
cin >> nome;

cout << nome;
cin.getline(nome, 5);
return 0;
}
