#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){


    printf("\nEsercizio 8: Allocazione dinamica della memoria per salvare nome e cognome");

    char *cogno;
    char *nome;

    cogno = (char *)malloc(10 * sizeof(char));
    strcpy(cogno, "Maffiotto");

    nome = (char *)malloc(7 * sizeof(char));
    strcpy(nome, "Andrea");

    printf("\nCognome: %s\nNome: %s", cogno, nome);
    printf("\n\n");
    return 0;
}