//
#include <stdio.h>
#include "colacircular.h"
#include <stdbool.h>

void iniciarCola (Cola *cola,int tamanio){
    cola->front = 0;
    cola-> rear = -1;
    cola->count =0;
    cola-> tamanio = tamanio;
}

bool colaVacia (Cola * cola){
    return (cola->count==0);
}

bool colallena (Cola * cola){
    return (cola->count == cola->tamanio);
}

void encolar (Cola * cola, int valor) {
    if (!colallena(cola)) {
        cola->rear = (cola->rear + 1) % cola->tamanio;// valor maximo que le puse a esta cola, el modulo hace
                                            //que rear vuelva al final de la cola
        cola -> data = valor;
        cola->count++;
    }
    else
        printf("La cola esta llena. No se puede encolar");
}


int desencolar (Cola * cola, int valor) {
    if (!colaVacia(cola)) {
        valor = cola->data;
        cola->front = (cola->front + 1) % cola->tamanio;//5 es el valor maximo que le puse a esta cola, el modulo hace
                                              //que front vuelva al principio de la cola
        cola->count--;
        return valor;
    }
    else
        printf("La cola esta vacia. No se puede desencolar");
    return -1;
}


int front (Cola * cola){
    if (!colaVacia(cola))
    {
        return cola->front;
    }
    else{
        printf("La cola esta vacia.");
        return -1;
    }
}

int rear (Cola * cola){
    if (!colaVacia(cola))
    {
        return cola->rear;
    }
    else{
        printf("La cola esta vacia.");
        return -1;
    }
}

void buscar (Cola * cola, int valor){
    if (!colaVacia(cola)) {
        int aux = cola->front;//guardo el frente en un aux

        while(cola->front !=cola->rear) {// mientras que el frente sea distinto a al final

            if (valor == cola->data) {
                printf("El valor %d se encuentra en la posicion %d", valor, cola->front);
            }
            else 
            cola->front = (cola->front + 1) % cola->tamanio;
        }
           cola->front = aux;         //vuelvo a poner el frente original y salgo del ciclo
            printf ("El valor no se encuentra en la cola.");
            }

    else
        printf("La cola esta vacia. No se puede buscar");

}


void swap (Cola*cola,int valor1,int valor2) {
    if (!colaVacia(cola)) {
        int aux = cola->front;
        while (cola->front !=cola->rear) {
            cola->front = (cola->front + 1) % cola->tamanio;
            if (cola->data == valor1) {
                cola->data = valor2;
            } else {
                cola->front = (cola->front + 1) % cola->tamanio;
                if (cola->data == valor2)
                    cola->data = valor1;
            }
        }
        cola->front = aux;

    } else
        printf("La cola esta vacia. No se puede intercambiar");
}

// Created by Usuario on 14/8/2023.
//
