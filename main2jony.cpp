#include <iostream>
#include <clocale>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<ctype.h>
#include<cstring>
#include"FUNC.H"

using namespace std;

int main() {

    int n, l, vectordedados[6],contadorderepeticiones[6];

const int tam=6;
char r,nombre[20],apellido[20],ganador[20];
int op;

system("cls");
cout<<"MENU BORRADOR DE PRUEBAS "<<endl;

cout<<"INGRESAR TU  NOMBRE"<<endl;
cin.getline(nombre,20);


cout<<endl;
cout<<"BIENVENIDO "<<nombre<<" "<<apellido<<" "<<endl;
cout<<"PULSE CUALQUIER LETRA PARA CONTINUAR";
cin.ignore();

while(true){
system("cls");
  cout<<"MENU DEL JUEGO"<<endl;
  cout<<"1- JUEGA UN JUGADOR "<<endl;
  cout<<"2- JUEGAN DOS JUGADORES "<<endl;
  cout<<"3- PUNTACION MAS ALTA"<<endl;
  cout<<"4- SALIR"<<endl;
  cout<<"ELIJA UNA OPCION "<<endl;
  cin>>op;
system("cls");

switch(op){

case 1:

cout<<" A TIRAR LOS DADOS !!"<<endl;
cargarDados (vectordedados);
//tirardados(vectordedados);
mostrardados(vectordedados);
ponercerouncontador(contadorderepeticiones),
cargarcontador(contadorderepeticiones,vectordedados),
n=funciondepuntaje(contadorderepeticiones);
cout<<"LA PUNTACION OPTENIDA EN ESTA LANZAMIENTO ES : "<<n<<endl;
cout<<endl;
cout<<"QUIERE TIRAR TODOS LOS DADOS DE NUEVO? S/N  ";
cin>>r;
switch ( r){
case  'S':
case  's':cout<<" SI "<<endl;
//tirardados(vectordedados);
cargarDados (vectordedados);
mostrardados(vectordedados);
ponercerouncontador(contadorderepeticiones);
cargarcontador(contadorderepeticiones,vectordedados);
n=funciondepuntaje(contadorderepeticiones);

cout<<"LA PUNTACION OPTENIDA EN ESTA LANZAMIENTO ES : "<<n<<endl;
system("pause");
    break;
case 'n': cout<<" NO "<<endl;
cout<<"LA PUNTACION OPTENIDA EN ESTA LANZAMIENTO FUE : "<<n<<endl;
    system("pause");


    break;
}


break;
  case 2:

    break;
  case 3:cout<<"dazczda";
    break;
  case 4:return 0;
    break;
    default:cout<<"ERROR";
    return 0;

  }
}

return 0;
}
