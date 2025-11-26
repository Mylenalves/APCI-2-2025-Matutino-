#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Utilizar exclusivamente a função main (Requisito 1)
    int opcao;
    char repetir;

    // Armazenamento eficiente dos dados (Requisito 3)
    float P, L, q; 
    float RA, RB, Mmax;
    
    do
    {
        // Implementação do menu principal (Requisito 4)
        printf("=====================================\n");
        printf(" CALCULADORA DE ESFORCOS EM VIGAS\n");
        printf("=====================================\n");
        printf("1 - Carga concentrada (no meio)\n");
        printf("2 - Carga distribuida (uniforme)\n");
        
        // Loop para garantir que a opção seja válida (1 ou 2)
        do {
            printf("Escolha a opcao: ");
            // Tenta ler a opção
            if (scanf("%d", &opcao) != 1) {
                // Se a leitura falhar (ex: entrada não numérica)
                printf("Entrada invalida. Por favor, digite um numero.\n");
                // Limpa o buffer de entrada
                while (getchar() != '\n'); 
                opcao = 0; // Força a repetição do loop
            } else if (opcao != 1 && opcao != 2) {
                printf("Opcao invalida! Escolha 1 ou 2.\n");
            }
        } while (opcao != 1 && opcao != 2);
        
        // Limpa tela (opcional)
        system("cls || clear");

        switch (opcao)
        {
            case 1:
            {
                printf("\n=== CARGA CONCENTRADA ===\n");
                
                // Validação de entrada para P (Requisito 2)
                do {
                    printf("Informe a carga P (kN) [deve ser > 0]: ");
                    scanf("%f", &P);
                    if (P <= 0) {
                        printf("Valor de carga P deve ser positivo.\n");
                    }
                } while (P <= 0);

                // Validação de entrada para L (Requisito 2)
                do {
                    printf("Informe o comprimento da viga L (m) [deve ser > 0]: ");
                    scanf("%f", &L);
                    if (L <= 0) {
                        printf("Valor de comprimento L deve ser positivo.\n");
                    }
                } while (L <= 0);
                
                // Cálculos originais (Fórmulas principais Fundamentos de Engenharia)
                RA = RB = P / 2.0;
                Mmax = (P * L) / 4.0;
                
                printf("\nReacao em A = %.2f kN", RA);
                printf("\nReacao em B = %.2f kN", RB);
                printf("\nMomento fletor maximo = %.2f kN.m\n", Mmax);
            };
            break;
            
            case 2:
            {
                printf("\n=== CARGA DISTRIBUIDA ===\n");

                // Validação de entrada para q (Requisito 2)
                do {
                    printf("Informe a carga distribuida q (kN/m) [deve ser > 0]: ");
                    scanf("%f", &q);
                    if (q <= 0) {
                        printf("Valor de carga distribuida q deve ser positivo.\n");
                    }
                } while (q <= 0);

                // Validação de entrada para L (Requisito 2)
                do {
                    printf("Informe o comprimento da viga L (m) [deve ser > 0]: ");
                    scanf("%f", &L);
                    if (L <= 0) {
                        printf("Valor de comprimento L deve ser positivo.\n");
                    }
                } while (L <= 0);
                
                // Cálculos originais (Fórmulas principais Fundamentos de Engenharia)
                RA = RB = (q * L) / 2.0;
                Mmax = (q * L * L) / 8.0;
                
                printf("\nReacao em A = %.2f kN", RA);
                printf("\nReacao em B = %.2f kN", RB);
                printf("\nMomento fletor maximo = %.2f kN.m\n", Mmax);
            };
            break;
            // O caso 'default' não é mais necessário aqui, pois a validação de 'opcao' é feita no loop 'do-while' antes do switch.
        }

        // Continuação do loop principal 
        printf("\nDeseja realizar outro calculo? (S/N): ");
        scanf(" %c", &repetir); // Espaço antes de %c para consumir espaços em branco ou nova linha pendente
        system("cls || clear");
        
    } while (repetir == 'S' || repetir == 's');

    printf("Programa encerrado. Obrigado!\n"); // testar
    return 0;
}