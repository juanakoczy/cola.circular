#include <stdio.h>
#include "colacircular.h"


int main() {
    Cola * cola = newCola(10);

    encolar(cola,10);
    encolar(cola,20);
    encolar(cola,70);
    encolar(cola,90);
    encolar(cola,80);
    encolar(cola,60);

    imprimir(cola);

    printf ("\nUltimo elemento: %d\n", rear(cola));

    buscar(cola,20);

    swap(cola,90,50);
    imprimir(cola);

    swapPosicion(cola,2,2);
    imprimir(cola);

    return 0;
}
