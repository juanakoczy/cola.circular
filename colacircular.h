//
// Created by Usuario on 14/8/2023.
//

#ifndef COLA_CIRCULAR_COLACIRCULAR_H
#define COLA_CIRCULAR_COLACIRCULAR_H


typedef struct cola{
    //int data[5];//capacidad maxima de la cola -> no es la capacidad, está declarando un array donde implementa la cola
    int* data; //array dinamico
    int tamanio; //AGREGO ESTE ATRIBUTO PARA SABER EL TAMAÑO DE LA COLA
    int front;//primer dato
    int rear;//ultimo dato
    int count;//contador de la cola
}Cola;


// declarar función para inicializar la cola considerando las correcciones


void iniciarCola (Cola *cola);
int colaVacia (Cola * cola); //verifica si la cola esta vacia
int colallena (Cola * cola); //verifica si la cola esta llena

void encolar (Cola * cola, int valor); //insertar un valor en la cola
int Desencolar (Cola * cola, int valor);//elimina un elemento de la cola

int front (Cola * cola); //Obtener el primer elemento sin eliminarlo
int rear (Cola * cola);//Obtener el ultimo elemento sin eliminarlo

#endif //COLA_CIRCULAR_COLACIRCULAR_H

