#include <stdio.h>
#include <stdlib.h>

#define ASSERT_EQ(expected, actual)\
    if ((expected) != (actual)){\
        printf("Falhou -> Esperado: %f Resultado: %f\n", expected, actual);\
        exit(1);\
    } else{\
        printf("Funcionou\n");\
    }