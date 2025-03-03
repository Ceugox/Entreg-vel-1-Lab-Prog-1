#include <stdio.h>
void pares (int i, int n) {
if(i>=n) {
    return;
}

else{
    printf("%d\n",i);
    pares(i+2,n); /*chamada recursiva*/
}
}
int main () {
 int n=0;
 printf("Insira um numero:");
 scanf("%d",&n);
 printf("Voce selecionou o numero %d, que gera a seguinte sequencia\n",n);
 pares(2,n);

 return 0;
}


