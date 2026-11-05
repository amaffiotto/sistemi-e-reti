#include <stdio.h>
#include <string.h>
#include "funzioniPerMacos.h" // !!!!!! SU WINDOWS CAMBIARLO CON IL FUNZIONI.H normale

#define MAX 100

int CaricaVettore(int *pv);
void VisualizzaVettore(int *pv, int len);

int main(){

     int vet[MAX];
     int lenVet; // Lunghezza puntatore
     int *p;
     printf("\n=========================\n Esercizio 4: Caricameto e visualizzazione vettore tramite puntatore\n=========================\n");

     randomize();

     // Carico vettore
     p = vet;
     lenVet = CaricaVettore(p);
     
     // Visualizza vettore;
     p = vet;
     printf("\n\nVettore:\n");
     VisualizzaVettore(p, lenVet);

     // Ordina Vettore
     bubble(p, lenVet);

     // Visualizza vettore Ordinato;
     p = vet;
     printf("\n\nVettore Ordinato:\n");
     VisualizzaVettore(p, lenVet);


     printf("\n\n");
     return 0;
}

int CaricaVettore(int *pv){
     int len;  
     // Chiedo in input la lunghezza del vettore;
     do
     {
          clrscr();
          printf("Inserisci la lunghezza del vettore ===> ");
          fflush(stdin);
          scanf("%d", &len);
     } while (len < 1 || len > MAX);

     // Carico il vettore
     for (int i = 0; i < len; i++)
     {
          *(pv++) = randomNumber(MAX) + 1;
          // *pv = randomNumber(MAX) + 1; Stessa cosa
          // pv++;
     }
     
     
     return len;
}

void VisualizzaVettore(int *pv, int len)
{
     for(int i = 0; i < len; i++) {
        printf("\n - elemento %d - valore %d - indirizzo %p", i+1, *pv, pv);
        pv++;
    }
     
}