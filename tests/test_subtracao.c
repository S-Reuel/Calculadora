#include<stdio.h>
#include<stdlib.h>
#include"../src/subtracao.h"
#define ASSERT_EQ(expected, actual)\
    if ((expected) != (actual)){\
        printf("Falhou");\
        exit(1);\
    } else{\
        printf("Funcionou");\
    }

void test_subtracao(){
    ASSERT_EQ(1.0, subtracao(2.0, 1.0));
    ASSERT_EQ(-1.0, subtracao(1.0, 2.0));
    ASSERT_EQ(-2.0, subtracao(-1.0, 1.0));
    ASSERT_EQ(2.0, subtracao(1.0, -1.0));
    ASSERT_EQ(0.0, subtracao(-1.0, -1.0));
    ASSERT_EQ(0.0, subtracao(1.0, 1.0));
}