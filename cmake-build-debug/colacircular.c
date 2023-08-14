//
#include <stdio.h>
#include "colacircular.h"

void iniciarCola (Cola *cola){
    cola->front = 0;
    cola-> rear = -1;
    cola->count =0;
}

int colaVacia (Cola * cola){
    return (cola->count==0);
}

int colallena (Cola * cola){
    return (cola->count == cola->data);
}

void encolar (Cola * cola, int valor) {
    if (!colallena(cola)) {
        cola->rear = (cola->rear + 1) % 5;//5 es el valor maximo que le puse a esta cola, el modulo hace
                                            //que rear vuelva al final de la cola
        cola->data[cola->rear] = valor;
        cola->count++;
    }
    else
        printf("La cola esta llena. No se puede encolar");
}


int Desencolar (Cola * cola, int valor) {
    if (!colaVacia(cola)) {
        valor = cola->data[cola->front];
        cola->front = (cola->front + 1) % 5;//5 es el valor maximo que le puse a esta cola, el modulo hace
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
        return cola->data[cola->front];
    }
    else{
        printf("La cola esta vacia.");
        return -1;
    }
}

int rear (Cola * cola){
    if (!colaVacia(cola))
    {
        return cola->data[cola->rear];
    }
    else{
        printf("La cola esta vacia.");
        return -1;
    }
}

// Created by Usuario on 14/8/2023.
//
