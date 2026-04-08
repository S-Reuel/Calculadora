#include<stdio.h>
#include"../src/soma.h"

#define ASSERT_EQ(expected, actual)\
    if ((expected) != (actual)){\
        printf("Falhou");\
        exit(1);\
    } else{\
        printf("Funcionou");\
    }

void test_soma(){
    ASSERT_EQ(5, soma(2, 3));
    ASSERT_EQ(0, soma(-1, 1));
    ASSERT_EQ(-3, soma(-1, -2));
}