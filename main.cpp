#include <clocale>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<ctype.h>
#include<cstring>
#include"FUNCIONES_GENERALA.H"
#include "rlutil.h"
#include <iostream>
using namespace std;


int main(){

int  opcion, puntajeMaximo=0, puntaje1, puntaje2;
bool bandjuego1=false;

cout<<"                           BIENVENIDO AL JUEGO DE LA GENERALA "<<endl;

while(true){

    system("cls");
    cout<<"MENÚ DEL JUEGO"<<endl;
    cout<<"1- JUEGO NUEVO: UN JUGADOR "<<endl;
    cout<<"2- JUEGO NUEVO: DOS JUGADORES "<<endl;
    cout<<"3- PUNTUACIÓN MÁS ALTA"<<endl;
    cout<<"4- SALIR"<<endl;
    cout<<"ELIJA UNA OPCIÓN "<<endl;
    cin>>opcion;
    rlutil::anykey();
    rlutil::cls();

    switch(opcion){

        case 1:
            puntaje1=juego1jugador();
            if (bandjuego1==false){
                puntajeMaximo=puntaje1;
            }
            else {
                if (puntaje1>puntajeMaximo){
                    puntajeMaximo=puntaje1;
                }
            }
            bandjuego1=true;

            break;

        case 2:
            juego2jugadores();
            puntaje2=juego1jugador();
            if (bandjuego1==false){
                puntajeMaximo=puntaje2;
            }
            else {
                if (puntaje1>puntajeMaximo){
                    puntajeMaximo=puntaje2;
                }
            }
            bandjuego1=true;

            break;

        case 3:
            cout<<"La puntuación más alta es de: "<<puntajeMaximo<<endl;
            break;

        case 4:
            return 0;
            break;

        default:
            rlutil::cls();
            cout<<"Opción es incorrecta. Por favor ingrese enter y vuelva a ingresar una opción..."<<endl;
            rlutil::anykey();
            rlutil::cls();
            break;

        }
    }
}
