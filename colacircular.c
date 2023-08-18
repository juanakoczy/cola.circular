//
#include <stdio.h>
#include "colacircular.h"
#include <stdbool.h>
#include <malloc.h>

Cola * newCola(int tamanio){
    Cola * aux = NULL;

    aux = malloc(sizeof(Cola));

    if (aux == NULL) {
        printf("No se pudo reservar memoria para la cola.\n");
        exit(-1);
    }
    aux-> tamanio=  tamanio;
    aux->front = 0;
    aux->rear = 0;
    aux->count = 0;
    return aux;
}


bool colaVacia (Cola * cola){
    return (cola->count==0);
}

bool colallena (Cola * cola){
    return (cola->count == cola->tamanio);
}

void encolar (Cola * cola, int valor) {
    if (!colallena(cola)) {
        cola->rear = (cola->rear + 1) % cola->tamanio;// el modulo mantien el valor dentro de la cola

        cola->data[cola->rear] = valor;
        cola->count++;
    }
    else
        printf("\nLa cola esta llena. No se puede encolar\n");
}


int desencolar (Cola * cola, int valor) {
    if (!colaVacia(cola)) {
        valor = cola->data[cola->front];
        cola->front = (cola->front + 1) % cola->tamanio;//5 es el valor maximo que le puse a esta cola, el modulo hace
                                              //que front vuelva al principio de la cola
        cola->count--;
        return valor;
    }
    else
        printf("\nLa cola esta vacia. No se puede desencolar\n");
    return -1;
}


int front (Cola * cola){
    if (!colaVacia(cola))
    {
        return cola->data[cola->front];
    }
    else{
        printf("\nLa cola esta vacia.\n");
        return -1;
    }
}

int rear (Cola * cola){
    if (!colaVacia(cola))
    {
        return cola->data[cola->rear];
    }
    else{
        printf("\nLa cola esta vacia.\n");
        return -1;
    }
}

void buscar (Cola * cola, int valor){
    if (!colaVacia(cola)) {
        int aux = cola->front;//guardo el frente en un aux

        while(aux !=cola->rear) {// mientras que el frente sea distinto a al final

            if (aux==valor) {
                printf("\nEl valor %d se encuentra en la posicion %d\n", valor, cola->front);
            }
            else 
            aux = (aux + 1) % cola->tamanio;
        }
           cola->front = aux;         //vuelvo a poner el frente original y salgo del ciclo
            printf ("\nEl valor no se encuentra en la cola.\n");
            }

    else
        printf("\nLa cola esta vacia. No se puede buscar\n");

}


void swap (Cola*cola,int valor1,int valor2) {
    if (!colaVacia(cola)) {
        int aux = cola->front;
        while (cola->front !=cola->rear) {
            cola->front = (cola->front + 1) % cola->tamanio;
            if (cola->data[cola->front] == valor1) {
                cola->data[cola->front] = valor2;
            } else {
                cola->front = (cola->front + 1) % cola->tamanio;
                if (cola->data[cola->front] == valor2)
                    cola->data[cola->front] = valor1;
            }
        }
        cola->front = aux;

    } else
        printf("\nLa cola esta vacia. No se puede intercambiar\n");
}


void swapPosicion (Cola * cola,int posicion,int posicionHaciaAdelante) {
    if (!colaVacia(cola)) {

        int posicionReal = (cola->front + posicion) % cola->tamanio;
        int posicionNueva = posicionReal;
        int aux = posicionReal;

        while(aux!=posicionHaciaAdelante) {


        }
    } else
        printf("\nCola vacia, no se puede intercambiar.\n");
}