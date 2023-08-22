//
#include <stdio.h>
#include "colacircular.h"
#include <stdbool.h>
#include <malloc.h>

Cola * newCola(int tamanio){
    Cola * aux = NULL;

    aux = malloc(sizeof(Cola)); //memoria para la estructura general
    if (aux == NULL) {
        printf("No se pudo reservar memoria para la estructura.\n");
        exit(-1);
    }

    aux-> tamanio=  tamanio;
    aux->front = 0;
    aux->rear = 0;
    aux->count = 0;
    aux->data = malloc(sizeof(int)*tamanio); //memoria para el arreglo de datos
    if (aux->data == NULL) {
        printf("No se pudo reservar memoria para la cola.\n");
        exit(-2);
    }

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
        if (cola->count != 0) //la cola tiene elementos
            cola->rear = (cola->rear + 1) % cola->tamanio;// avanzao una posición. el modulo mantiene el valor dentro de la cola
        cola->data[cola->rear] = valor;
        cola->count++;
    }
    else
        printf("\nLa cola esta llena. No se puede encolar\n");
}

int desencolar (Cola * cola) {
    if (!colaVacia(cola)) {
        //int valor = cola->data[cola->front];
        int valor = front(cola); //así usamos la funcion front, pero no es necesario
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

            // if (aux==valor) { mal! esta comparando un indice con un valor
            if (cola->data[aux] == valor){  //correcto! compara el valor del indice con el valor buscado
                printf("\nEl valor %d se encuentra en la posicion %d\n", valor, aux);
                return; //ya encontré el valor, no es necesario seguir buscando
            }
            aux = (aux + 1) % cola->tamanio;
        }
        //falta el caso en que el valor buscado sea el ultimo elemento
        if (cola->data[aux]) {
            printf("\nEl valor %d se encuentra en la posicion %d\n", valor, aux);
            } else {
                printf ("\nEl valor no se encuentra en la cola.\n");
            }
        //cola->front = aux;  vuelvo a poner el frente original y salgo del ciclo -> no! siempre trabaja con el auxiliar y no toca el frente original
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