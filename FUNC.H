#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED
#include <iostream>
#include <clocale>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<ctype.h>
#include<cstring>
using namespace std;


void tirardados(int );///con un vector fijo de 6 elementos se carga en forma aleatorio.
void mostrardados(int );/// muestra el vector cargado en la funcion tirardados.
void cargarDados (int vecDados[]);
void ponercerouncontador(int); ///pone en cero un contador de 6 caras del dado. con un vector de 6 elementos.
void cargarcontador(int,int ); /// con el vector de dados , cargo el vector de contador.
int funciondepuntaje(int);  /// recorro el vector y cuento las repeticiones para devolver el resultado del lanzamiento.

int maximoVector(int v[], int tam);

int v[5];int contador[6]; /// vectores , dados y el contador





void cargarDados (int vecDados[]){
    int i;
    for(i=0;i<5;i++){
        cout<<"INGRESE NUMERO DE DADO "<<i+1<<": ";
        cin>>vecDados[i];
        cout<<endl;
    }
}
int maximoVector(int v[], int tam){
    int i, posMax=0;
    for(i=1;i<tam;i++){
        if(v[i]>v[posMax]) {
                posMax=i;
        }
    }
    return posMax;
}

void tirardados(int v[5]) {
srand(time(NULL));
int i;
for(i=0;i<5;i++){
  v[i]=1+(rand()%6);
}
 }

void mostrardados(int v[5]){
    srand(time(NULL));
    int i;
    for(i=0;i<5;i++){
cout<<v[i]<<"\t";

}
cout<<endl;
}




void ponercerouncontador(int contador[5]){
int i;
for(i=0;i<6;i++){
contador[i]=0;
}
}

void cargarcontador(int contador[6],int v[5]){
int i;
for (i=0;i<6;i++){

    if (v[i]==1) {
        contador[0]++;
    }
    if (v[i]==2) {
        contador[1]++;
    }
    if (v[i]==3) {
        contador[2]++;
    }
    if (v[i]==4) {
        contador[3]++;
    }
    if (v[i]==5) {
        contador[4]++;
    }
    if (v[i]==6) {
        contador[5]++;
    }

}

}

int funciondepuntaje(int contador[6]){

int i, puntos=0, puntos2=0, acu=0, contadordeescalera=0, Max=0;
bool b2=false,b3=false;

for(i=0;i<6;i++){
    if (contador[i]==5){
        puntos=50;
    }
    else{
        if(contador[i]==4){
        puntos=40;
        }
        else{
            if(contador[i]==3){
                b3=true;
                puntos=(i+1)*3;
            }
            else{
                if(contador[i]==2){
                    b2=true;
                    puntos=(i+1)*2;
                }
                else{
                    if(contador[i]==1){
                    contadordeescalera++;
                    puntos2=i+1;
                    }
                    else{
                        if(contadordeescalera!=5 && contadordeescalera!=0) {
                            contadordeescalera--;
                        }

                    }
                }
            }
        }
    }
}
if (b2==true && b3==true){
        puntos=30;
}


if(contadordeescalera==5){
        puntos=25;
}

if (puntos<=4) {
    puntos=puntos2;
    }



acu+=puntos;

return acu;
}



#endif // FUNCIONES_GENERALA_H_INCLUDED


/** else {

    for(i=0;i<6;i++){
            if(contador[i]==3){
                puntos=(i+1)*3;
            }
            else{
                if(contador[i]==2){
                    puntos=(i+1)*2;
                }
                else{
                    puntos=i+1;
                }
            }
    }
}

if (puntos==0){
    for(i=0;i<6;i++){
        int maximo;
        if(contador[i]==1){
                    maximo=maximoVector(v,5);
                    puntos= maximo+1; //buscar el mayor de los 5 dados y asignarle a puntos
                }
    }
}
for (i=0;i<5;i++) {
            if (v[i]>Max){
                Max=v[i];
            }
**/
