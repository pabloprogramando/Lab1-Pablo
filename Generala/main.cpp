#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include "rlutil.h"
#include"FUNCIONES_GENERALA.H"
using namespace std;


int main(){

int  opcion, puntajeMaximo=0, puntaje1, puntaje2;
bool bandjuego1=false;
setBackgroundColor(RED);
setColor(WHITE);
recuadro(1,1,60,20);
rlutil::locate(14,4);
cout<<"BIENVENIDO AL JUEGO DE LA GENERALA ";

dados();

setBackgroundColor(RED);
rlutil::setColor(rlutil::WHITE);
rlutil::locate(2,20);
system("pause");
system("cls");
while(true){
    recuadro(1,1,60,20);
    recuadro(8,4,46,15);
    rlutil::locate(23,3);
    cout<<"MENU DEL JUEGO";
    rlutil::locate(11,7);
    cout<<"1- JUEGO NUEVO: UN JUGADOR ";
    rlutil::locate(11,9);
    cout<<"2- JUEGO NUEVO: DOS JUGADORES ";
    rlutil::locate(11,11);
    cout<<"3- PUNTUACION MAS ALTA";
    rlutil::locate(11,13);
    cout<<"4- SALIR";
    rlutil::locate(11,15);
    cout<<"ELIJA UNA OPCION: ";
    cin>>opcion;
system("cls");


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
            puntaje2=juego2jugadores();
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
            recuadro(1,1,60,20);
            recuadro(8,4,46,15);
            rlutil::locate(15,10);
            cout<<"EL PUNTAJE MAXIMO ES: "<<puntajeMaximo;
            rlutil::locate(2,20);
            system("pause");
            system("cls");
            break;

        case 4:
            return 0;
            break;

        default:
            recuadro(1,1,60,20);
            rlutil::locate(15,10);
            cout<<"Opcion incorrecta";
            locate(2,20);
            system("pause");
            system("cls");
            break;
        }
    }
}
