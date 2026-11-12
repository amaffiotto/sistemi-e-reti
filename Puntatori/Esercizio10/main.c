#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
int main(){
    int *array;
    int lunA;

    printf("\n Esercizio 10: Allocazione dinamica di un vettore di interi");

    do
    {
        printf("\nInserisic la lunghezza del vettore ==>   ");
        fflush(stdin);
        scanf("%d", &lunA);

    } while (lunA < 1 || lunA > MAX);

    array = (int *)malloc(sizeof(int) * lunA);

    // Carico il vettore

    for (int i = 0; i < lunA; i++)
    {
        array[i] = i * 2;
    }

    // Visualizzo il vettore
    
    for (int i = 0; i < lunA; i++)
    {
        printf("\n\nVettore:\n\n Elemento %d - Valore: %d - Indirizzo %p", i + 1, array[i], &array[i]);
    }

    free(array);
    printf("\n\n");
    
    return 0;
}