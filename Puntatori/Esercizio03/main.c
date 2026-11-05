#include <stdio.h>

int main()
{

    int vet[5] = {10, 20, 30, 40, 50};
    int *p;

    printf("\n\nEsercizio 3: gestione Vettori con Puntatori\n\n");

    // p = vet[0]; // Versione "grezza" / "grossolana"
    p = vet;

    for(int I=0; I<5; I++) {
        printf("\n - elemento %d - valore %d - indirizzo %p", I+1, *p, p);
        p++; // FONDAMENTALE !!!!
    }

    p = vet; // Riporto l'indirizzo al primo elemento del vettore

    p = &vet[2];
    *p = 18;
    printf("\n\n - valore %d - indirizzo %p", *p, p);

    p[2] = 12;

    p = vet;

    printf("\n\n");

    // Ristampo il vettore
    for(int I=0; I<5; I++) {
        printf("\n - elemento %d - valore %d - indirizzo %p", I+1, *p, p);
        p++;
    }

    
    *p = 100; // Elemento fuori dal vettore sovrascritto
    p = vet;
    printf("\n\n");
    for(int I=0; I<6; I++) {
        printf("\n - elemento %d - valore %d - indirizzo %p", I+1, *p, p);
        p++;
    }



    printf("\n\n");

    return 0;

}
