#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    // 1) tipos de dados
    // char - caracter
    // int - inteiro
    // float - flutante até 6 casas
    // double - flutante até 12 casas 
    //void - sem tipo 

    // 2) variaveis e contantes
    int idade = 16; 
    char tecla = 's';
    float nota = 8.5f;
    const double PI = 3.1415169226;

    printf("Os valores das variáveis:\n");
    printf("idade = %i\n", idade);
    printf("tecla = %c\n", tecla);
    printf("nota = %.2f\n", nota);
    printf("pi = %.12f\n", PI);

    printf("\nInforme os novos valores:\n");
    scanf("%i",&idade);
    getchar(); //ler uma tecla limpa \n
    scanf("%c",&tecla);
    getchar(); //ler uma tecla limpa \n
    scanf("%f",&nota);
    //scanf("%f",pi); não pode!!

    printf("Os novos valores são:\n");
    printf("idade = %i\n", idade);
    printf("tecla = %c\n", tecla);
    printf("nota = %.2f\n", nota);
    printf("pi = %.12f\n", PI);

    return 0;

}