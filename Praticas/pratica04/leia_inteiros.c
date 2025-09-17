#include <stdio.h> // inclusao de bibliotecas
#include <math.h>
#include <locale.h>
#include <stdlib.h>


// funcao principal
int main() { 

    int numero;
    setlocale(LC_ALL,"");
    printf("\nDigite um número inteiro:\n");
    scanf("%i",&numero);
    getchar(); //ler uma tecla limpa \n

    printf("\nVocê digitou: %i\n", numero);
    
    
    int x,y;
    printf("\nDigite as coordenadas x e y:\n");
    scanf("%i %i",&x, &y);
    getchar(); //ler uma tecla limpa \n

    printf("\nVocê digitou: %i e %i\n", x, y);
    
    system("PAUSE");
    return 0;

}