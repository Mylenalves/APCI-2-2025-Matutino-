#include <stdio.h> // inclusao de bibliotecas
#include <math.h>
#include <locale.h>
#include <stdlib.h>


// funcao principal
int main() { 

    float preco;
    setlocale(LC_ALL,"");

    printf("\nDigite um preço:\n");
    scanf("%f",&preco);
    getchar(); //ler uma tecla limpa \n

    printf("\nVocê digitou: %.2f\n", preco);
    
    system("PAUSE");
    return 0;

}