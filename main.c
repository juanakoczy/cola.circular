#include <stdio.h>
#include "colacircular.h"


int main() {
    Cola *cola = NULL;


    iniciarCola(cola,2);

    encolar(cola,10);
    encolar(cola,20);


    printf ("Primer elemento: %d", front(cola));

    printf ("Desencolar %d", desencolar(cola,10));

    printf ("Primer elemento: %d", front(cola));

    encolar(cola,70);

    printf ("Ultimo elemento: %d", rear(cola));

    buscar(cola,10);

    swap(cola,10,20);

    return 0;
}
