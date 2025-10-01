#include <stdio.h>

int main() {
    int idade;

    printf("Informe sua idade: ");
    scanf("%i", &idade);

    if (idade < 16) {
        printf("Voce naum pode votar!\n");
    }else {
        if(idade < 18 || idade > 70) {
            printf("Voce pode votar!\n");
        }else {
            printf("Voce deve votar!\n");
        }
    }




}