#include <stdio.h>
#define tam 10

int main (){
    FILE*fp=fopen("ex6.txt","r");

    if(fp==NULL){
       printf("Nao foi possivel abrir o arquivo");
       return 1;
    }
char sexo[tam];
float nota[tam];
float notaMasc[tam];
float notaFem[tam];
int i=0;
int m=0;
int n=0;
float somaMasc=0;
float somaFem=0;
float mediaMasc=0;
float mediaFem=0;

 while(fscanf(fp,"%s %f",&sexo[i],&nota[i])!=EOF) {

    if(sexo[i]=='M') {
        notaMasc[m]=nota[i];
        somaMasc+=notaMasc[m];
        m++;
    }

    else if(sexo[i]='F') {
      notaFem[n]=nota[i];
      somaFem+=notaFem[n];
      n++;
    }
i++;


 }
 mediaMasc=somaMasc/m;
 mediaFem=somaFem/n;
if(mediaFem>mediaMasc){
printf("A media feminina eh maior que a masculina e eh igual a: %.1f",mediaFem);
}
else{
    printf("A media masculina eh maior que a feminina e eh igual a: %.1f",mediaMasc);
}
fclose(fp);

return 0;
}





