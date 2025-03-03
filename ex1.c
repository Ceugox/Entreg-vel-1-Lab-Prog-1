#include <stdio.h>

int main() {
    int n, i;

    printf("Vamos imprimir todos os pares entre 0 e n\n");
    printf("Digite o numero n: ");
    scanf("%d", &n);

    for(i = 0; i <= n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
