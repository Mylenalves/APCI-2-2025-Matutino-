#include <stdio.h>
#include <locale.h> // biblioteca de idiomas

int main() {
    setlocale(LC_ALL, ""); // usa o idioma portugues

    printf("- - - - - - - - - - -\n");
    printf("- - - - - - - - - - -\n");
    printf(" N O T A    L E G A L\n");
    printf("- - - - - - - - - - -\n");
    printf("- - - - - - - - - - -\n");
    printf("Produto         Qta     Valor Unit\n");
    printf("Camiseta        002     39.99\n");
    printf("Calca           001     89.90\n");
    printf("Media Social    003     19.99\n");
    printf("- - - - - - - - - - -\n");
    printf("- - - - - - - - - - -\n");
    printf("Total ........: 229.85\n");

    // especificador de formato
    // %c - imprime um caracter
    // %s - imprime um texto (string)
    // %i - imprime um inteiro
    // %f - imprime um flutuante (fracionario)

printf("\n\n\n");
    printf("- - - - - - - - - - -\n");
    printf("- - - - - - - - - - -\n");
    printf(" N O T A    L E G A L\n");
    printf("- - - - - - - - - - -\n");
    printf("- - - - - - - - - - -\n");
    printf("Produto     Qta     Valor Unit\n");
    printf("%-15s\t%03i\t%4.2f\n", "Camisa", 002, 39.99);
    printf("%-15s\t%03i\t%4.2f\n", "Calca", 001, 89.90);
    printf("%-15s\t%03i\t%4.2f\n", "Mídia Social", 003, 19.99);
    printf("- - - - - - - - - - -\n");
    printf("- - - - - - - - - - -\n");
    printf("Total ........: 229.85\n");

    return 0;
}