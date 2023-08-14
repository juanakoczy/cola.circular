//
// Created by Usuario on 14/8/2023.
//

#ifndef COLA_CIRCULAR_COLACIRCULAR_H
#define COLA_CIRCULAR_COLACIRCULAR_H


typedef struct cola{
    int data[5];//capacidad maxima de la cola
    int front;//primer dato
    int rear;//ultimo dato
    int count;//contador de la cola
}Cola;

void iniciarCola (Cola *cola);

#endif //COLA_CIRCULAR_COLACIRCULAR_H
