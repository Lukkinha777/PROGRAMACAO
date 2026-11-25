#include <stdio.h>
#include <iostream>
using namespace std;

// JOGO 4 EM LINHA //

const int LINHAS = 6;
const int COLUNAS = 9;

void mostraTabuleiro(string arr[LINHAS][COLUNAS]);
void preencheTabuleiro(string arr[LINHAS][COLUNAS]);
int pedePecaJogador();
bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]);
bool tabuleiroCheio(string arr[LINHAS][COLUNAS]);
bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]);


int main() {
    string tabuleiro[LINHAS][COLUNAS];
    int quemJoga=1; // 1-X -1º jogar // 2-O -2ºjogar !
    int quemGanhou=0;
    int colunaJogar = 0;
    bool jogou = false;


    preencheTabuleiro(tabuleiro);
    tabuleiro [5][0] = "S";



    do {

        mostraTabuleiro(tabuleiro);

        colunaJogar = pedePecaJogador();

        jogou = colocaPecaTabuleiro("X", colunaJogar, tabuleiro);

    } while (!ganhouJogo(quemGanhou, tabuleiro) && !tabuleiroCheio(tabuleiro));

    /*tabuleiro[0][1] = "s";
    mostraTabuleiro(tabuleiro);
    mostraTabuleiro(tabuleiro);*/

    return 0;
}
void preencheTabuleiro(string arr[LINHAS][COLUNAS]) {
  for ( int i = 0; i < LINHAS ; i++) {

        for (int j = 0; j < COLUNAS; j++){
            arr[i] [j] = " ";
        }

    }

}


void mostraTabuleiro(string arr[LINHAS][COLUNAS]) {
    cout << "***** 4 EM LINHA *****\n\n";
    /*cout <<  " 6 |_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|\n";
    cout <<  " 5 |_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|\n";
    cout <<  " 4 |_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|\n";
    cout <<  " 3 |_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|\n";
    cout <<  " 2 |_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|\n";
    cout <<  " 1 |_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|\n";
    cout <<  "   " << " 1 " << " 2 "<< " 3 " << " 4 "<< " 5 " << " 6 "<< " 7 " << " 8 " << " 9";*/

    for (int i = LINHAS - 1; i >= 0; i--){
        cout << "|";
        for (int j = 0; j < COLUNAS; j++){
            cout << arr [i] [j] << "|";

     }
        cout << "\n";
    }
    cout << "|";
    for (int j = 0; j < COLUNAS; j++){

        cout << j << "|";
    }


    /*cout << "\nLinha 1: Coluna 2: -"  << arr[0][1] << "-";
    arr[0][1] = "a";*/

}

int pedePecaJogador() {
    // pedir peça entra 1 e 9
    // so aceitar entre 1 e 9
    // terirar -1 porque começa em 0e termina em 8
    // devolver a coluna onde quer jogar
    int col;
    cout << "\ndonde quieres? ( entre 0 e 8)";
    cin >> col;
    if (col < 0){
        cout << "nao tem esse numeros\n";
    }
        else if (col > 8){
            cout << "e de 0 a 8" << endl;
        }


    return 0;
}

bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]) {
    return false;
}

bool tabuleiroCheio(string arr[LINHAS][COLUNAS]) {
    return false;
}

bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]) {
    return false;
}
