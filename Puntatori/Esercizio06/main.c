#include <stdio.h>

int main(){
     printf("\nEsercizio 6: Elevamento al quadrato di una frazionetramite puntatori\n");
     int n;
     int d;
     int *pn;
     int *pd;
     printf("\n\n");
     printf("Inserire il numeratore della frazione da elevare al quadrato ===>   ");
     scanf("%d", &n);
     pn = &n;
      printf("Inserire il numeratore della frazione da elevare al quadrato ===>   ");
     scanf("%d", &d);
     pd = &d;
     printf("\nRisultato dell'elevazione al quadrato di %d / %d: %d / %d\n", *pn, *pd, *pn * *pn, *pd * *pd);

     return 0;
}