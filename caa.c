#include <stdio.h>
#include <stdlib.h>
int main () {
    FILE*fp=fopen("ex5.txt","r");

   if(fp==NULL) {
    printf("Nao foi possivel abrir o arquivo \n");
    return 1;
   }
int numero;
int numeros[1];
int ordempares=1;
int ordemimpares=1;
int pares;
int impares;
int qtdnumeros;
int produtopares;
int somatorioimpares;
 while (fscanf(fp,"%d",&numero)!=EOF) {
    if(numero%2==0){

            numeros[ordempares]=numero;
            ordempares++;
            produtopares=numeros[ordemimpares]*numeros[ordemimpares-1];
             printf("O produtorio dos pares eh:%d\n",produtopares);
    }
    else {
      numeros[ordemimpares]=numero;
      ordemimpares++;
      somatorioimpares=numeros[ordemimpares]+numeros[ordemimpares-1];
    }
 }
fclose(fp);
printf("O produtorio eh %d:",produtopares);

return 0;
}

