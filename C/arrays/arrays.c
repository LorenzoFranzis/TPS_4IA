#include <stdio.h>
#include <string.h>

int main(){
    /*
    int length = 5;
    int array[length];

    for(int i = 0; i < length; i++){
        array[i] = i;
    }
    */

   int a = 2;
   int b;

   b = a++;
   printf("b = %d, a = %d \n", a, b);
   a = 2;
   b = ++a;
   printf("b = %d, a = %d \n", b, a);

   char stringa[6] = {'s', 't', 'r', 'i', 'n', 'g'};
   printf("%d\n", &stringa);

   //strcpy(copy); strcat(cut); strcmp(compare tra due, restituisce -1 se sono diverse, 1 se sono uguali); strlen(lunghezza della stringa);

    return 0;
}