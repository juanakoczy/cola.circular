#include <stdio.h>
#include "colacircular.h"


int main() {
    Cola *cola;
    iniciarCola(cola);

    encolar(cola,10);
    encolar(cola,20);
    encolar(cola,30);
    encolar(cola,40);
    encolar(cola,50);

    printf ("Primer elemento: %d", front(cola));

    printf ("Desencolar %d", Desencolar(cola,10));

    printf ("Primer elemento: %d", front(cola));

    encolar(cola,60);
    encolar(cola,70);



    return 0;
}
