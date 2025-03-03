#include <stdio.h>
 void pares(int i, int n) {
      if (i>=n) {
        return;
      }
 else {
    printf("%d\n",i);
    pares(i+2,n); /*chamada recursiva*/
 }

 }
int main () {
int n;
printf("Insira um numero:");
scanf("%d",&n);
pares(2,n); /*Inicia a recursão a partir de 2*/
return 0;
}
