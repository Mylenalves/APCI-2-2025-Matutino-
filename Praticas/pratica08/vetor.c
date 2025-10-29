#include<stdio.h>

int main () {

    int vetor[5]; // uma dimensao = vetor 

    vetor[0]= 1;
    vetor[1]= 1;
    vetor[2]= 2;
    vetor[3]= 3;
    vetor[4]= 5;
    
    for (int i = 0; i < 5; i++) {
        vetor[i] = i +1;
    }
    for (int i = 0; i < 5; i++) {
        printf("Entre com o %io numero: ", i + 1);
        scanf("%i", &vetor[i]);
    }

    printf("Os numeros digitados foram: ");
    for(int i = 0; i < 5; i++) {
        if (i < 4) {
            printf("%i, ", vetor[i]);
        } else {
            printf("%i", vetor[i]);
        }
    }
    printf("\n");

     return 0;


}