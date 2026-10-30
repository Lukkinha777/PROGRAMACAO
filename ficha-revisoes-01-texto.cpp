#include <iostream>

using namespace std;

int main () {
string nome,localidade,genero;
string mensagem="";
int idade;

cout << "me diz o seu nome: ";
cin >>  nome ;

cout << "me diz a sua idade: ";
cin >>  idade ;

cout << "me diz a sua localidade: ";
cin >> localidade ;

cout << "me diz o seu genero: ";
cin >> genero ;

if (genero == "M"){
        mensagem = " Caro Sr. " + nome ;
}

else if (genero == "F"){
        mensagem = " Cara Sra. " + nome ;
}

if (idade >= 18){
        mensagem = mensagem + " maior de idade ";
}

else if (idade < 18){
        mensagem = mensagem + " menor de idade  ";
}

mensagem = mensagem + "mora em " + localidade;

cout << mensagem;
}
