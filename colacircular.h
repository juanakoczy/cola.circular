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


void iniciarCola (Cola *cola, int tamanio);
bool colaVacia (Cola * cola); //verifica si la cola esta vacia
bool colallena (Cola * cola); //verifica si la cola esta llena

void encolar (Cola * cola, int valor); //insertar un valor en la cola
int desencolar (Cola * cola, int valor);//elimina un elemento de la cola

int front (Cola * cola); //Obtener el primer elemento sin eliminarlo
int rear (Cola * cola);//Obtener el ultimo elemento sin eliminarlo


void buscar (Cola * cola, int valor);
void swap (Cola*cola,int valor1,int valor2);
void swapPosicion (Cola * cola,int posicion1,int posicion2);

#endif //COLA_CIRCULAR_COLACIRCULAR_H

