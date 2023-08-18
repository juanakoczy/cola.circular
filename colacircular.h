//
// Created by Usuario on 14/8/2023.
//

#ifndef COLA_CIRCULAR_COLACIRCULAR_H
#define COLA_CIRCULAR_COLACIRCULAR_H


#include <stdbool.h>

typedef struct cola{
    int *data;//
    int front;//primer dato
    int rear;//ultimo dato
    int count;//contador de la cola
    int tamanio;
}Cola;

Cola * newCola(int tamanio);

bool colaVacia (Cola * newCola); //verifica si la cola esta vacia
bool colallena (Cola * newCola); //verifica si la cola esta llena

void encolar (Cola * newCola, int valor); //insertar un valor en la cola
int desencolar (Cola * newCola, int valor);//elimina un elemento de la cola

int front (Cola * newCola); //Obtener el primer elemento sin eliminarlo
int rear (Cola * newCola);//Obtener el ultimo elemento sin eliminarlo


void buscar (Cola * newCola, int valor);
void swap (Cola*newCola,int valor1,int valor2);
void swapPosicion (Cola * newCola,int posicion1,int posicion2);

#endif //COLA_CIRCULAR_COLACIRCULAR_H

