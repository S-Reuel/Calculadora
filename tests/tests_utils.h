#include <stdio.h>
#include <stdlib.h>

#define ASSERT_EQ(expected, actual)\
    if((expected) != (actual)){\
        printf("Falhou: Esperava: %f Resultado: %f\n");\
        exit(1);\
    }else{\
        printf("Funcionou\n");\
    }