#include <stdio.h>

int main() {
    int matriz [3][3]; // duas ou mais dimensoes = matriz

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;
    

    for (int i = 0; i < 3; i++)
    {//percorre a linha
        for(int j = 0; j < 3; j++)
        { //percorre a coluna 
            printf("Entre com o %ia numero da %ia numero ", j + 1, i + 1);
            scanf("%i", &matriz[i][j]);
        }

    }

    printf("Sua Matriz\n");
    for (int i = 0; i < 3; i++)
    { // percorre a linha
    printf("%ia matriz ", i + 1);
    for (int j = 0; j < 3; j++)
    {//percorre a coluna
    printf("%i\t", matriz[i][j]);
    }
    printf("\n");
    }

    return 0;
}