#include <stdio.h>

int main(){
    int numero = 16;
    int* pnumero = &numero; //l'indirizzo, non il valore

    printf("%d", pnumero);
    return 0;
}