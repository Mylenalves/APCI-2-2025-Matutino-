#include <stdio.h> // inclusao de bibliotecas
#include <math.h>
#include <locale.h>
#include <stdlib.h>


// funcao principal
int main() { 
    setlocale(LC_ALL,"");

    int idade = 25;
    float altura = 1.75f;
    char tecla = 'A';
    const double numero_e = 2.7182818284;

    printf("Idade = %i\n", idade);
    printf("Altura = %.2f\n", altura);
    printf("Tecla = %c\n", tecla);
    printf("Numero de Euler: = %.12f\n", numero_e);
    
    system("Pause");
    return 0;

}