#include <stdio.h>
#include <math.h>
#define tam 10
void fibonacci(int*x,int i,int n){
if(i==n){
printf("O valor do número da ordem %d de fibonacci eh:%d",n,x[i]);
    return;
}
else if(n==1){
printf("O valor do primeiro número de fibonacci eh 1");
}

else{
    x[i+1]=x[i]+x[i-1];
    fibonacci(x,i+1,n);
}

}

int main (){
    int x[tam];
    int i=1;
    int n=0;
do{
    printf("Seja bem-vindo a calculadora do n-esimo numero de fibonacci\n");
    printf("Insira o valor de n pretendido:");
    scanf("%d",&n);
} while(n<=0);
   x[0]=0;
   x[1]=1;
    printf("Calculando....\n");
    fibonacci(x,i,n);

return 0;


}




