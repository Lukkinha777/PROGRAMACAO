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
    tabuleiro [0][1] = "s";



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

    cout <<  " 6 |_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|\n";
    cout <<  " 5 |_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|\n";
    cout <<  " 4 |_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|\n";
    cout <<  " 3 |_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|\n";
    cout <<  " 2 |_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|\n";
    cout <<  " 1 |_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|" << "|_|"<< "|_|"<<"|_|\n";
    cout <<  "   " << " 1 " << " 2 "<< " 3 " << " 4 "<< " 5 " << " 6 "<< " 7 " << " 8 " << " 9";
    /*cout << "\nLinha 1: Coluna 2: -"  << arr[0][1] << "-";
    arr[0][1] = "a";*/

}

int pedePecaJogador() {

    int col;
    cout << "\ndonde quieres?";
    cin >> col;
    if (col > 9 && col < 1){
        cout << " e de 1 a 9 bixo sabido";
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





