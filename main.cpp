#include <iostream>
#include <clocale>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<ctype.h>
#include<cstring>
#include"FUNCIONES_GENERALA.H"

using namespace std;

int main(){

int  vecDados[6], opcion, ronda=0, puntaje=0;
char ganador[25], jugador1[25], jugador2[25], continuarLanzando;
const int tam=5;

cout<<" BIENVENIDO AL JUEGO DE LA GENERALA "<<endl;

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
            cout<<"Puntaje total "<<puntaje<<endl;
            cout<<"Lanzamiento n° "<<endl;

            void mostrarDados(int vecDados[], int tam);


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

            case 4:
                return 0;
                break;


        }
    }
    return 0;
}


            /*else {
                cout<< "Fin del turno, presione enter para continuar..."<<endl;
                ronda++;
                sumarPuntos(vecDados,tam);
                system("pause");
                cout<<endl;
                cout<< "Presiona 'Enter' para continuar ... "<<endl;
                cout<<endl;
                while ( getchar() != '\n');

                } */

    /*cout<<"ELIJA UNA OPCIÓN "<<endl;
    cin>>opcion;
    cin.ignore();
    system("cls");

    switch(opcion){



    cout<<" A TIRAR LOS DADOS !!"<<endl;
    void tirarDados(int vecDados[], int tam);
    void mostrarDados(int vecDados[], int tam);


    int sumarPuntos(int vecDados[], int tam);


    system("cls");
    break;

    case 4:
        return 0;

    }
    */


/** cout<<" A TIRAR LOS DADOS !!"<<endl;
      SEGUNDOMENU(),tirardados(vectdados),mostrardados(vectdados),puntos(vectdados,vpuntos,l);
cout<<" S/N!!"<<endl;
cin>>r;

switch ( r){
case 's' : cout<<"si"<<endl;
system("pause");
tirardados(vectdados);
mostrardados(vectdados);
puntos(vectdados,vpuntos,l);

    break;
case 'n': cout<<"no"<<endl;
    system("pause");
    break;
}


break;
  case 2:

    break;
  case 3:cout<<"dada";
    break;
  case 4:return 0;
    break;
    default:cout<<"ERROR";
    return 0;

  }
}

return 0;
}           */

/*cout<<endl;
        cout<< "Presiona 'Enter' para continuar ... "<<endl;
        cout<<endl;
        while ( getchar() != '\n')
            */
