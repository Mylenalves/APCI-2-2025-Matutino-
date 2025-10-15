#include <stdio.h>

int main()
{
    int ladoA;
    int ladoB;

    printf("Entre com o valor do lado A do retangulo: ");
    scanf("%i", &ladoA);

    printf("Encontre com o valor do lado B do retangulo: ");
    scanf("%i", &ladoB);

    for (int i = 1; i <= ladoA; i++)
    {
        printf("*");
    }
    printf("\n");

    for (int i = 1; i <= ladoA; i++)
    {
        for (int j = 1; j <= ladoB; j++)
        {
            if (i == 1 || i == ladoA) // desenha a 1a e ultima linha
            {
                printf("-");
            }
            else if (j == 1 || j == ladoB) // desenha a 1a e a ultima
            {
                printf("|");
            }
            else
            {
                printf(" ");
            }
        }
            printf("\n");
    }

    return 0;
}