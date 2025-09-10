#include <stdio.h> // inclusao de bibliotecas
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

// funcao principal
int main() { 
    setlocale(LC_ALL,"");
    printf("O tipo 'char' aceita valores entre %i e %i.\n", CHAR_MIN, CHAR_MAX);

    printf("O tipo 'int' aceita valores entre %i e %i.\n", INT_MIN, INT_MAX);

    printf("O tipo 'float' aceita valores entre %E e %E.\n", FLT_MIN, FLT_MAX);

    printf("O tipo 'double' aceita valores entre %E e %E.\n", DBL_MIN, DBL_MAX);

    system("PAUSE");
    return 0;

}