#include <stdio.h>
#include <stdlib.h>

int main () {

    int opcao  = 0;

    while (opcao != 3) {
        system("clear"); // limpar o terminar
        printf("-----------------------\n");
        printf("    M E U   J O G O    \n");
        printf("-----------------------\n");
        printf("    1- Novo Jogo       \n");
        printf("    2- Ver Ranking     \n");
        printf("    3- Sair            \n");
        printf("-----------------------\n");
        printf("    Escolha uma opcao => ");
        scanf("%i", &opcao);
        while(getchar ()!= '\n'); // limpar buffer

        switch(opcao) 
        {
        case 1: 
        {
            system("clear");
            char nome [30];
            printf("Entre com seu nome: ");
            fgets(nome, sizeof(nome), stdin);
            printf("Ola %s!\n", nome);
            printf("Pressione ENTER para comecar o jogo\n");
            getchar();
            //...
        }
        case 2: 
        {
        }
        case 3: 
            printf("Ate logo!\n");
            break;
        default:
            printf("Opcao invalida! Pressione ENTER. \n");
            getchar();
        }

    }   
    return 0;


}