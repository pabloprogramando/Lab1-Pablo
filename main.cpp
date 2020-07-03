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

int  opcion, puntajeMaximo;

cout<<"                           BIENVENIDO AL JUEGO DE LA GENERALA "<<endl;

while(true){

    system("cls");
    cout<<"MENÚ DEL JUEGO"<<endl;
    cout<<"1- JUEGA UN JUGADOR "<<endl;
    cout<<"2- JUEGAN DOS JUGADORES "<<endl;
    cout<<"3- SALIR"<<endl;
    cout<<"ELIJA UNA OPCIÓN "<<endl;
    cin>>opcion;
    rlutil::anykey();
    rlutil::cls();

    switch(opcion){

        case 1:
            juego1jugador();
            break;

        case 2:
            juego2jugadores();
            break;

        case 3:
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
