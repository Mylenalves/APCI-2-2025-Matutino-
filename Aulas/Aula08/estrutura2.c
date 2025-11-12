#include <stdio.h>
#include <string.h>

int main()
{
    struct endereco_t // novo tipo para o C
    {
        char tipo_logradouro;
        char nome_logradouro[61];
        int numero;
        char bairro[31];
        char localidade[41];
        char uf[3];
    };

    struct endereco_t meu_endereco;

    meu_endereco.tipo_logradouro = 'Q';
    strcpy(meu_endereco.nome_logradouro, "SGAS");
    meu_endereco.numero = 613;
    strcpy(meu_endereco.bairro, "Asa Sul");
    strcpy(meu_endereco.localidade, "Brasilia");
    strcpy(meu_endereco.uf, "DF");

    printf("Meu endereco: ");
    printf("%c - %s %i\n", meu_endereco.tipo_logradouro,
           meu_endereco.nome_logradouro,
           meu_endereco.numero);
    printf("%s\n", meu_endereco.bairro);
    printf("%s - %s\n", meu_endereco.localidade, meu_endereco.uf);

    struct contato_t
    {
        char nome[61];
        long long int telefone;
        struct endereco_t endereco;
    };

    struct contato_t meu_contato;

    strcpy(meu_contato.nome, "Jose");
    meu_contato.telefone = 6188888888L;
    meu_contato.endereco = meu_endereco;

    printf("Meu contato:\n");
    printf("%s\n", meu_contato.nome);
    printf("Telefone: %li", meu_contato.telefone);
    printf("%c - %s %i\n", meu_contato.endereco.tipo_logradouro,
           meu_contato.endereco.nome_logradouro,
           meu_contato.endereco.numero);
    printf("%s\n", meu_contato.endereco.bairro);
    printf("%s - %s\n", meu_contato.endereco.localidade,
           meu_contato.endereco.uf);

    struct contato_t contatos[10]; // vetor com 10 contatos

    for (int i = 0; i < 10; i++)
    {
        printf("Entre com os dados do %io contato\n", i + 1);
        printf("Nome: ");
        // scanf("%[^\n]s", contatos[i].nome);
        fgets(contatos[i].nome, sizeof(contatos[i].nome), stdin);
        printf("Telefone: ");
        scanf("%li", &contatos[i].telefone);
        while (getchar()!='\n');
        printf("Endereco\n");
        contatos[i].endereco.tipo_logradouro = 'Q';
        printf(" Logradouro: ");
        fgets(contatos[i].endereco.nome_logradouro, 
        sizeof(contatos[i].endereco.nome_logradouro), stdin);
        printf(" Numero: ");
        scanf("%i", &contatos[i].endereco.numero);
         while (getchar()!='\n');
        printf(" Bairro: ");
        fgets(contatos[i].endereco.bairro, 
        sizeof(contatos[i].endereco.bairro), stdin);
        printf(" Localidade: ");
        fgets(contatos[i].endereco.localidade, 
        sizeof(contatos[i].endereco.localidade), stdin);
        printf(" UF: ");
        fgets(contatos[i].endereco.uf, 
        sizeof(contatos[i].endereco.uf), stdin);
    }

    // strcpy(contatos[0].nome, "Maria");

    printf("Meus contatos:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%io Contato:\n", i + 1);
        printf("%s\n", contatos[i].nome);
        printf("Telefone: %li", contatos[i].telefone);
        printf("%c - %s %i\n",
               contatos[i].endereco.tipo_logradouro,
               contatos[i].endereco.nome_logradouro,
               contatos[i].endereco.numero);
        printf("%s\n", contatos[i].endereco.bairro);
        printf("%s - %s\n",
               contatos[i].endereco.localidade,
               contatos[i].endereco.uf);
    }

    return 0;
}