
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

int  vecDados[6], opcion, ronda=1, puntajeTotal1=0, puntajeTotal2=0, puntajeMaximo=0;
int puntajeRonda=0, lanzamiento1=1, lanzamiento2=1;
char ganador[25], jugador1[25], jugador2[25], continuarLanzando;
const int tam=5;

cout<<"                           BIENVENIDO AL JUEGO DE LA GENERALA "<<endl;

while(true){

    system("cls");
    cout<<"MENÚ DEL JUEGO"<<endl;
    cout<<"1- JUEGA UN JUGADOR "<<endl;
    cout<<"2- JUEGAN DOS JUGADORES "<<endl;
    cout<<"3- PUNTACIÓN MÁS ALTA"<<endl;
    cout<<"4- SALIR"<<endl;
    cout<<"ELIJA UNA OPCIÓN "<<endl;
    cin>>opcion;
    cin.ignore();


    rlutil::cls();

    switch(opcion){

        case 1:
            juego1jugador();
            break;

        case 2:
            juego2jugadores();
            break;

        case 3:
            cout<<"Puntuación más alta: "<<puntajeMaximo<<endl;
            break;
        case 4:
            return 0;
            break;
        default:
            rlutil::cls();
            cout<<"Opción es incorrecta. Por favor ingrese enter y vuelva a ingresar una opción"<<endl;
            rlutil::anykey();
            rlutil::cls();
            break;

        }
    }
}


/**cout<< "Presiona 'Enter' para continuar ... "<<endl;
                cout<<endl;
                while ( getchar() != '\n');
                system("pause");**/
