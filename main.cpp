
#include <clocale>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<ctype.h>
#include<cstring>
#include"FUNCIONES_GENERALA.H"
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
    system("cls");

    switch(opcion){

        case 1: //aca podria ir la funcion juego de 1

            cout<<"INGRESE NOMBRE DEL JUGADOR: "<<endl;
            cin.getline(jugador1,25);
            cin.ignore();

            system("pause");

            cout<<"Turno de "<<jugador1<<endl;
            cout<<"Ronda n° "<<ronda<<endl;
            cout<<"Puntaje total "<<puntajeTotal1<<endl;
            cout<<"Lanzamiento n° "<<lanzamiento1<<endl;
            lanzamiento1++;
            ronda++;
            puntajeTotal1+=puntajeRonda;



            tirarDados(vecDados, tam);
            mostrarDados(vecDados, tam);


            cout<<"Continuar lanzando?"<<endl;
            cin>>continuarLanzando;

            switch (continuarLanzando){
                case 'n':
                case 'N':
                cout<< "Fin del turno, presione enter para continuar..."<<endl;
                ronda++;
                sumarPuntos(vecDados,tam);
                system("pause");
                cout<<endl;
                cout<< "Presiona 'Enter' para continuar ... "<<endl;
                cout<<endl;
                while ( getchar() != '\n');


                break;

            case 'S':
            case 's':

                break;
            }
            break;

            case 2:
                cout<<"INGRESE NOMBRE DEL JUGADOR 1: "<<endl;
                cin.getline(jugador1,25);
                cin.ignore();

                tirarDados(vecDados, tam);
                mostrarDados(vecDados, tam);


                system("pause");

                cout<<"INGRESE NOMBRE DEL JUGADOR 2: "<<endl;
                cin.getline(jugador2,25);
                cin.ignore();

                tirarDados(vecDados, tam);
                mostrarDados(vecDados, tam);

                system("pause");

                ///juego2jugadores(jugador1,jugador2);

                cout<<"Turno de "<<jugador1<<endl;
                cout<<"Ronda n° "<<ronda<<endl;
                cout<<"Puntaje total "<<puntajeTotal2<<endl;
                cout<<"Lanzamiento n° "<<lanzamiento1<<endl;
                lanzamiento1++;
                ronda++;



                break;

            case 3:
                cout<<"Puntuación más alta: "<<puntajeMaximo<<endl;



            case 4:
                return 0;
                break;


        }
    }

}


