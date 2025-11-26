#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    char repetir;

    do
    {
        // Menu principal
        printf("=====================================\n");
        printf(" CALCULADORA DE ESFORCOS EM VIGAS\n");
        printf("=====================================\n");
        printf("1 - Carga concentrada (no meio)\n");
        printf("2 - Carga distribuida (uniforme)\n");
        printf("Escolha a opcao: ");
        scanf("%d", &opcao);

        // Limpa tela (opcional, depende do sistema)
        system("cls || clear");

        switch (opcao)
        {
        case 1:
        {
            float P, L, RA, RB, Mmax;

            printf("\n=== CARGA CONCENTRADA ===\n");
            printf("Informe a carga P (kN): ");
            scanf("%f", &P);
            printf("Informe o comprimento da viga L (m): ");
            scanf("%f", &L);

            RA = RB = P / 2.0;
            Mmax = (P * L) / 4.0;

            printf("\nReacao em A = %.2f kN", RA);
            printf("\nReacao em B = %.2f kN", RB);
            printf("\nMomento fletor maximo = %.2f kN.m\n", Mmax);
        };
        break;
        case 2:
        {
            float q, L, RA, RB, Mmax;

            printf("\n=== CARGA DISTRIBUIDA ===\n");
            printf("Informe a carga distribuida q (kN/m): ");
            scanf("%f", &q);
            printf("Informe o comprimento da viga L (m): ");
            scanf("%f", &L);

            RA = RB = (q * L) / 2.0;
            Mmax = (q * L * L) / 8.0;

            printf("\nReacao em A = %.2f kN", RA);
            printf("\nReacao em B = %.2f kN", RB);
            printf("\nMomento fletor maximo = %.2f kN.m\n", Mmax);
        };
        break;
        default:
            printf("Opcao invalida!\n");
        }

        printf("\nDeseja realizar outro calculo? (S/N): ");
        scanf(" %c", &repetir);

        system("cls || clear");

    } while (repetir == 'S' || repetir == 's');

    printf("Programa encerrado. Obrigado!\n");
    return 0;
}
