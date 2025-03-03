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
int numerospares[tam];
int numerosimpares[tam];
int ordempares=1;
int ordemimpares=1;
int produtopares=0;
int somatorioimpares=0;
int i=1;
int j=1;
int m=1;
int n=1;
 while (fscanf(fp,"%d",&numeros[tam])!=EOF) {
    if(numeros[tam]%2==0){
            numerospares[i]=numeros[i];
            i++;
    }
    else {
     numerosimpares[j]=numeros[j];
     j++;
    }
 }
 printf("%d",j);
 printf("%d",i);

fclose(fp);


return 0;
}

