#include <stdio.h> // inclusao de bibliotecas
#include <locale.h>
#include <stdlib.h>

// funcao principal  Terminar essa atividade importante 


int main() { 
    int nota;
    

    setlocale(LC_ALL,"");

    printf("Entre com uma nota de 1 a 5: ");

    switch (nota) {
        case 1: printf("Sua avaliação foi *\n"); break; 
        case 2: printf("Sua avaliação foi **\n"); break; 
        case 3: printf("Sua avaliação foi ***\n"); break; 
        case 4: printf("Sua avaliação foi ****\n"); break; 
        case 5: printf("Sua avaliação foi *****\n"); break; 
        default: printf("Nota invalida.  Tente novamente\n");
    }

return 0;
}