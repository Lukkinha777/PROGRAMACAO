#include <iostream>

using namespace std;


char grelha [9] = { '0','1','2','3','4','5','6','7','8' };
    int posicao;
      bool jogoTerminou = false, aceitaJogada;
    void lugarJogar(){

    }



void grelhaJogo () {
    string p0 = "0", p1 = "1", p2 = "2", p3 = "3", p4 = "4", p5 = "5", p6 = "6", p7 = "7", p8 = "8";
     cout << "\n " << p0 << "|" << p1 << "|" << p2;
     cout << "\n " << p3 << "|" << p4 << "|" << p5;
     cout << "\n " << p6 << "|" << p7 << "|" << p8;
     cout << "\ndonde quires jogar?";
     cin >> posicao;
    }

int main () {
    int pocisao;
    string terminar;
    string x = "X";
    grelha [8] = x[0];
    cout << grelha [8];
    int peca;
    string p0 = "0", p1 = "1", p2 = "2", p3 = "3", p4 = "4", p5 = "5", p6 = "6", p7 = "7", p8 = "8";

    while (!jogoTerminou){
        grelhaJogo ();

switch (pocisao) {
        case 1:
            if (p0 == "0") {
                p0 = peca;
                aceitaJogada = true;
            }
            break;
        case 2:
            if (p1 == "1") {
                p1 = peca;
                aceitaJogada = true;
            }
            break;
        case 3:
            if (p2 == "2") {
                p2 = peca;
                aceitaJogada = true;
            }
            break;
        case 4:
            if (p3 == "3") {
                p3 = peca;
                aceitaJogada = true;
            }
            break;
        case 5:
            if (p4 == "4") {
                p4 = peca;
                aceitaJogada = true;
            }
            break;
        case 6:
            if (p5 == "5") {
                p5 = peca;
                aceitaJogada = true;
            }
            break;
        case 7:
            if (p6 == "6") {
                p6 = peca;
                aceitaJogada = true;
            }
            break;
        case 8:
            if (p7 == "7") {
                p7 = peca;
                aceitaJogada = true;
            }
            break;
        case 9:
            if (p8 == "8") {
                p8 = peca;
                aceitaJogada = true;
            }
            break;
        default:
            cout << "\nEITA BIXO SABIDO .. 1 a 9 apenas \n";
            break;
        }


       if (aceitaJogada) {
            if (peca == "X") {
                peca == "O";
            } else {
                peca == "X";
            }
        } else {
            cout << "\nPosicao ja preenchida \n";
        }
        if (p0==p1 && p1==p2){
            jogoTerminou = true;
        }
         else if (p2==p3 && p4==p5){
            jogoTerminou = true;
        }
         if (p6==p7 && p8==p8){
            jogoTerminou = true;
        }
        if (p0!="0" && p1!="1"&& p2!="2"&& p3!="3"&& p4!="4"&& p5!="5"&& p6!="6"&& p7!="7"&& p8!="8"){
            jogoTerminou = true;
        }
    }
    }


