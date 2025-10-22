#include <stdio.h>

int main() {
    int numero = 0;

    printf("Entre com o numero: ");
    int leu_certo = scanf("%i", &numero);

    while (leu_certo == 0) {
        while (getchar() != '\n'); //limpar o buffer
        printf("Nao eh um numero! Tente novamente.\n");
        printf("Entre com o numero: ");
        leu_certo = scanf("%i", &numero);
    }

    return 0;
}