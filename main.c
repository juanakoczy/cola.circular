#include <stdio.h>
#include "colacircular.h"


int main() {
    Cola * cola = newCola(3);

    encolar(cola,10);
    encolar(cola,20);
    encolar(cola,70);

    printf ("\nUltimo elemento: %d\n", rear(cola));

    buscar(cola,20);

    swap(cola,10,20);
    swapPosicion(cola,1,2);

    return 0;
}
