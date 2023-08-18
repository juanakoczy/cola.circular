#include <stdio.h>
#include "colacircular.h"


int main() {
    Cola * cola = newCola(2);


    encolar(cola,10);
    encolar(cola,20);


    printf ("\nPrimer elemento: %d\n", front(cola));

    desencolar(cola,20);

    printf ("\nPrimer elemento: %d\n", front(cola));

    encolar(cola,70);

    printf ("\nUltimo elemento: %d\n", rear(cola));

    buscar(cola,10);

    swap(cola,10,20);
    swapPosicion(cola,1,2);

    return 0;
}
