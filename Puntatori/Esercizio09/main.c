#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * Copia(char s[]);

int main(){
    char strOrg[50 + 1];
    char *pStr;

    printf("\nEsercizio 9: si copia una stringa in un area dinamica");

    // Input della stringa
    printf("\nInserisci una stringa =>   ");
    fflush(stdin);
    gets(strOrg);

    printf("\nStringa Originale: \"%s\"", strOrg);

    pStr = Copia(strOrg);

    printf("\nStringa Copiata: \"%s\"", pStr);

    free(pStr);
    printf("\n\n");

    return 0;
}

char * Copia(char s[])
{
    int lunS = strlen(s);
    int i = 0;
    char *psCopia;
    char ch;

    psCopia = (char *)malloc((lunS) * sizeof(char));

    for(i = 0; i < lunS; i++){
        ch = s[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch += ('A' - 'a');
        }
        psCopia[i] = ch;
    }
    psCopia[i] = '\0';
    return psCopia;
}