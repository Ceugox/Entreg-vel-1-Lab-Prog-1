#include <stdio.h>
#include <stdlib.h>
#define tam 10
int main () {
    FILE*fp=fopen("ex5.txt","r");

   if(fp==NULL) {
    printf("Nao foi possivel abrir o arquivo \n");
    return 1;
   }
int numeros[tam];
int numerospares[tam],numerosimpares[tam];
int produtopares=1;
int somatorioimpares=0;
int i=0;
int m=0;
int n=0;
 while (fscanf(fp,"%d",&numeros[i])!=EOF) {
    if(numeros[i]%2==0){
            numerospares[m]=numeros[i];
            produtopares*=numerospares[m];
            m++;
    }
    else {
     numerosimpares[n]=numeros[i];
     somatorioimpares+=numerosimpares[n];
     n++;
    }
    i++;
 }
 printf("O somatorio dos impares eh:%d\n",somatorioimpares);
 printf("O produtorio dos pares eh:%d",produtopares);

fclose(fp);


return 0;
}

