#include <stdio.h> // inclusao de bibliotecas
#include <locale.h>
#include <stdlib.h>

// funcao principal
int main() { 
    int numero;
    setlocale(LC_ALL,"");

    printf("\nDigite um número inteiro:\n");

    int eh_um_numero = scanf("%i", &numero);
    int numero_eh_divisivel_por_2 = numero % 2 == 0;

    if (eh_um_numero) {
        printf("Você digitou o número: %d\n", numero);
    }
    if (numero_eh_divisivel_por_2)
    {
        /* code */
    }
    

    return 0;

}