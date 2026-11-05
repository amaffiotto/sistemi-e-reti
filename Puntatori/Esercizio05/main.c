#include <stdio.h>

int main(){
     printf("\nEsercizio 5: Elevamento al quadrato tramite puntatori\n");
     int n;
     int *p;
     printf("\n\n");
     printf("Inserire il numero da elevare al quadrato ===>   ");
     scanf("%d", &n);
     p = &n;
     printf("\nRisultato dell'elevazione al quadrato di %d: %d\n", *p, *p * *p);

     return 0;
}