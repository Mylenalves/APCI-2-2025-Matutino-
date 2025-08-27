#include <stdio.h>
#include <locale.h> // biblioteca de idiomas

int main() {
    setlocale(LC_ALL, ""); // usa o idioma portugues
    printf("- - - - - - -\n\n");
    printf("Boletim!\n\n");   
    printf("- - - - - - -\n\n");

    printf("- - - - - - - - - - -\n");
    printf(" B O L E T I M\n");
    printf("- - - - - - - - - - -\n");
    printf("Matricula    A1     A2     Media\n");
    printf("20210010     8.5    5.0      6.4\n");
    printf("20215053     4.7    10.0     7.9\n");
    printf("20220027     5.6    8.3      7.2\n");
    printf("20220103     9.2    1.5      4.6\n");
    printf("- - - - - - - - - - -\n");

    // especificador de formato
    // %c - imprime um caracter
    // %s - imprime um texto (string)
    // %i - imprime um inteiro
    // %f - imprime um flutuante (fracionario)

    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    printf("                   B O L E T I M\n");
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    printf("%-08s\t%2.2f\t%2.2f\t%2.2f\n", "20210010", 8.5, 5.0, 6.4);
    printf("%-08s\t%2.2f\t%2.2f\t%2.2f\n", "20215053", 4.7, 10.0, 7.9);
    printf("%-08s\t%2.2f\t%2.2f\t%2.2f\n", "20220027", 5.6, 8.3, 7.2);
    printf("%-08s\t%2.2f\t%2.2f\t%2.2f\n", "20220103", 9.2, 1.5, 4.6);
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - -\n");

    return 0;
}