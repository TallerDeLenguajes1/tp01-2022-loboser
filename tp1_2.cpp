#include "iostream"
#include "stdio.h"

using namespace std;

int cuadrado(int num);
void cuadrado2(int num);
void direccionycontenido(int var);
void invertir(int a, int b);
void ordenar(int a, int b);

int main(){
    int entero = 2, entero_b = 6;
    printf("Funcion Cuadrado: %d\n\n", cuadrado(entero));
    cuadrado2(entero);
    direccionycontenido(entero);
    invertir(entero, entero_b);
    ordenar(entero,entero_b);
    return 0;
    return 0;
}

int cuadrado(int num){
    return num*num;
}

void cuadrado2(int num){
    printf("Funcion cuadrado void: %d\n\n", num*num);
}

void direccionycontenido(int var){
    printf("Direccion de la variable: %d\nContenido de la variable: %d\n\n", &var, var);
}

void invertir(int a, int b){
    int aux = a;
    a = b;
    b = aux;
    printf("Funcion invertir:\n Nuevo valor de A: %d\n Nuevo valor de B: %d\n\n", a, b);
}

void ordenar(int a, int b){
    int aux;
    if(a>b){
        aux = a;
        a = b;
        b = aux;
    }else if(b===a){
        printf("Ambos son iguales, no hay numero mayor");
    }
    print("Numero Menor: %d\nNumero Mayor: %d", a, b)
}
