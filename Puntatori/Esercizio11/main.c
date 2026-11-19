#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *subString(int pIni, int pFin, char *pStringa);
int str2Int(char * pStringa);
int power(int base, int esponente);

int main()
{
    
    char *pStr;
    char *pStr2;
    char operazione;
    int i = 0, trovato = 0, pos, lun;
    int n1 = 0;
    int n2 = 0;
    double risultato = 0.0;
    char errore = 'N';

    char *pStrN1, *pStrN2;

    printf("\nEsercizio 11: Parsing di una stringa con le 4 operazioni");

    //Input della stringa
    printf("\nInserisci una stringa (nnnOnnn) ==> ");
    fflush(stdin);

    gets(pStr);
    strcpy(pStr2, pStr);

    // Cerco nella stringa il tipo di operazione [+ - * /]
    lun = strlen(pStr);
    while(trovato == 0 && lun > i)
    {
        if(pStr[i] == '+' || pStr[i] == '-' || pStr[i] == '*' || pStr[i] == '/' )
        {
            trovato = 1;
            operazione= pStr[i];
            pos = i;
        }
        else
        {
            i++;            
        }
    }
    
    //Identifico i due numeri
    pStrN1 = pStr;
    pStrN2 = pStr;

    strcpy(pStrN1, subString(0, pos, pStr));
    strcpy(pStrN2, subString(pos+1, lun, pStr2));
    strcpy(pStr2, pStrN2);
    n1 = str2Int(pStr);
    n2 = str2Int(pStr2);

    switch (operazione)
    {
    case '+':
        risultato = (n1 + n2);
        break;
    case '-':
        risultato = (n1 - n2);
        break;
    case '*':
        risultato = (n1 - n2);
        break;
    case '/':
        if (n2 != 0)
        {
            risultato = ((double)n1 / (double)n2);
        }
        else{
            printf("\n Impossibile eseguire il calcolo");
            errore = 'Y';
        }
        
        break;
    }

    if (errore == 'N')
    {
        printf("\n\n\nRisultato di %d %c %d = %f", n1, operazione, n2, risultato);
    }
    
    free(pStr);
    free(pStr2);
    return 0;
}


char *subString(int pIni, int pFin, char *pStringa)
{
    char *strApp;

    strApp = (char *)malloc((pFin-pIni)+1 * sizeof(char));

    for(int i = pIni; i < pFin; i++)
    {
        strApp[i - pIni] = pStringa[i];
    }

    strApp[pFin - pIni] = '\0';

    return strApp;
}

int str2Int(char * pStringa){
    int num = 0;
    int lun = strlen(pStringa);

    for (int i = 0; i < lun; i++)
    {
        num += ((pStringa[i] - '0') * power(10,(lun - i - 1)));
    }
    
    return num;
}

int power(int base, int esponente){
    int num = 1;

    for (int i = 0; i < esponente; i++)
    {
        num *= base;
    }

    return num;
}