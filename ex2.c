#include <stdio.h>

int main() {
    int n;
    int i;

    printf("Insira um n�mero n:\t");
    scanf("%d", &n);

    if (n % 2 == 0) {
        for (i = 2; i < n; i += 2) { // Ajuste na condi��o para incluir 'n' se for par
            printf("%d ", i);
        }
    } else {
        for (i = 2; i < n; i += 2) { // Unifica��o da l�gica, mantendo consist�ncia
            printf("%d ", i);
        }
    }

    return 0;
}
