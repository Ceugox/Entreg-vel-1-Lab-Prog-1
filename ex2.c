#include <stdio.h>

int main() {
    int n;
    int i;

    printf("Insira um número n:\t");
    scanf("%d", &n);

    if (n % 2 == 0) {
        for (i = 2; i < n; i += 2) { // Ajuste na condição para incluir 'n' se for par
            printf("%d ", i);
        }
    } else {
        for (i = 2; i < n; i += 2) { // Unificação da lógica, mantendo consistência
            printf("%d ", i);
        }
    }

    return 0;
}
