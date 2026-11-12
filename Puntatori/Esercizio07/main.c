#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int *pi;
    char *pc;

    printf("\nEsercizio 7: Allocazione dinamica della memoria");
    /**
     * Malloc()
     * 
     * Restituisce sempre un puntatore a VOID
     * 
     * Primo parametro: cast al tipo di allocazione
     * 
     * Secondo parametro: Istruzione malloc
     * 
     * Terzo parametro: Dimensione dell'area di memoria
     */

    pi = (int*)malloc(sizeof(int));
    *pi = 15;

    pc = (char*)malloc(sizeof(char));
    *pc = 'Z';

    printf("\nNumero %d - Indirizzo %p", *pi, pi);
    printf("\nCarattere %c - Indirizzo %p", *pc, pc);
    return 0;
}