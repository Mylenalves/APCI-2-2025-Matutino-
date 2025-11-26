#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Utilizar exclusivamente a função main (Requisito 1)
    int opcao;
    char repetir;
    float P, L, q;       // Armazenamento eficiente: apenas as variáveis necessárias (Requisito 3)
    float RA, RB, Mmax;
    int leitura_ok;
    int c;               // para limpar o buffer de entrada

    do
    {
        // Implementação do menu principal (Requisito 4)
        printf("=====================================\n");
        printf(" CALCULADORA DE ESFORCOS EM VIGAS\n");
        printf("=====================================\n");
        printf("1 - Carga concentrada (no meio)\n");
        printf("2 - Carga distribuida (uniforme)\n");

        // Validação da opção do menu (somente 1 ou 2) + tratamento de entrada não numérica
        while (1) {
            printf("Escolha a opcao: ");
            if (scanf("%d", &opcao) != 1) {
                printf("Entrada invalida. Por favor, digite 1 ou 2.\n");
                while ((c = getchar()) != '\n' && c != EOF); // limpa buffer
            } else if (opcao != 1 && opcao != 2) {
                printf("Opcao invalida! Escolha 1 ou 2.\n");
            } else {
                break; // opção válida
            }
        }

        // Limpa tela (opcional, funciona em Windows e Linux)
        system("cls || clear");

        switch (opcao)
        {
            case 1:
                printf("\n=== CARGA CONCENTRADA ===\n");

                // Validação de entrada para P (Requisito 2)
                do {
                    printf("Informe a carga P (kN) [deve ser > 0]: ");
                    leitura_ok = scanf("%f", &P);
                    if (leitura_ok != 1) {
                        printf("Entrada invalida. Digite um numero.\n");
                        while ((c = getchar()) != '\n' && c != EOF);
                        P = -1.0f; // mantém o loop
                    } else if (P <= 0.0f) {
                        printf("Valor de carga P deve ser positivo.\n");
                    }
                } while (P <= 0.0f);

                // Validação de entrada para L (Requisito 2)
                do {
                    printf("Informe o comprimento da viga L (m) [deve ser > 0]: ");
                    leitura_ok = scanf("%f", &L);
                    if (leitura_ok != 1) {
                        printf("Entrada invalida. Digite um numero.\n");
                        while ((c = getchar()) != '\n' && c != EOF);
                        L = -1.0f;
                    } else if (L <= 0.0f) {
                        printf("Valor de comprimento L deve ser positivo.\n");
                    }
                } while (L <= 0.0f);

                // Cálculos
                RA = RB = P / 2.0f;
                Mmax = (P * L) / 4.0f;

                printf("\nReacao em A = %.2f kN", RA);
                printf("\nReacao em B = %.2f kN", RB);
                printf("\nMomento fletor maximo = %.2f kN.m\n", Mmax);
                break;

            case 2:
                printf("\n=== CARGA DISTRIBUIDA ===\n");

                // Validação de entrada para q (Requisito 2)
                do {
                    printf("Informe a carga distribuida q (kN/m) [deve ser > 0]: ");
                    leitura_ok = scanf("%f", &q);
                    if (leitura_ok != 1) {
                        printf("Entrada invalida. Digite um numero.\n");
                        while ((c = getchar()) != '\n' && c != EOF);
                        q = -1.0f;
                    } else if (q <= 0.0f) {
                        printf("Valor de carga distribuida q deve ser positivo.\n");
                    }
                } while (q <= 0.0f);

                // Validação de entrada para L (Requisito 2)
                do {
                    printf("Informe o comprimento da viga L (m) [deve ser > 0]: ");
                    leitura_ok = scanf("%f", &L);
                    if (leitura_ok != 1) {
                        printf("Entrada invalida. Digite um numero.\n");
                        while ((c = getchar()) != '\n' && c != EOF);
                        L = -1.0f;
                    } else if (L <= 0.0f) {
                        printf("Valor de comprimento L deve ser positivo.\n");
                    }
                } while (L <= 0.0f);

                // Cálculos
                RA = RB = (q * L) / 2.0f;
                Mmax = (q * L * L) / 8.0f;

                printf("\nReacao em A = %.2f kN", RA);
                printf("\nReacao em B = %.2f kN", RB);
                printf("\nMomento fletor maximo = %.2f kN.m\n", Mmax);
                break;
        }

        // Pergunta se deseja repetir, com validação do caractere
        do {
            printf("\nDeseja realizar outro calculo? (S/N): ");
            scanf(" %c", &repetir); // espaço antes de %c ignora enter anterior
            if (repetir != 'S' && repetir != 's' && repetir != 'N' && repetir != 'n') {
                printf("Opcao invalida. Digite S para sim ou N para nao.\n");
            }
        } while (repetir != 'S' && repetir != 's' && repetir != 'N' && repetir != 'n');

        system("cls || clear");

    } while (repetir == 'S' || repetir == 's');

    printf("Programa encerrado. Obrigado!\n");
    return 0;
}
