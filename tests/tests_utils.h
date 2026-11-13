#include <stdio.h>
#include <stdlib.h>

#define ASSERT_EQ(expected, actual)\
    if ((expected) != (actual)){\
        printf("Falhou");\
        exit(1);\
    } else{\
        printf("Funcionou\n");\
    }\