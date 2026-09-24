#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funzioni.h"

// Studenti.txt
// Matricola
// Cognome
// Nome
// Classe
// Specializzazione

void DisegnaMenu();
void Attesa();

void InserisisciStudente();

void main()
{
    int scelta;
    FILE *fp;

    fp = fopen("Studenti.txt", "r");
    if (fp == NULL){
        fclose(fp);
        fp = fopen("Studenti.txt", "w");
    }
    fclose(fp);

    // MENU

    do
    {
        DisegnaMenu();
        fflush(stdin);
        scanf("%d", &scelta);

        switch (scelta)
        {
        case 1:
            InserisisciStudente();
            break;
        case 2:
            break;
        default:
            break;
        }
        if (scelta != 0)
        {
            Attesa();
        }
        
    } while (scelta != 0);
    
}

void DisegnaMenu(){
    clrscr();
    printf("=== Esercizio 2 - Gestione file studenti ===\n");
    printf("1 - Inserimento nuovo studente\n");
    printf("2 - Ricerca Studente per Cognome/Nome\n");
    printf("3 - Visualizza gli studenti per classe\n");
    printf("4* - Visualizza file studenti\n");
    printf("5 - Modifica Studente\n");
    printf("6 - Elimina studente\n\n");
    printf("0 - Esci\n================================\n");
    printf("\n\n nScelta ===> ");
}

void Attesa(){
    printf("Premi un carattere per continuare...");
    fflush(stdin);
}

void InserisisciStudente()
{

}
