#include <stdio.h>
#include <stdlib.h>

#define ASSERT_EQ(expected, actual)\
    if ((expected) != (actual)){\
        printf("Falhou -> Esperado: %.2f Resultado: %.2f\n", expected, actual);\
        exit(1);\
    } else{\
        printf("Funcionou\n");\
    }