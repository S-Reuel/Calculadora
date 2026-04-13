#include<stdio.h>
#include<stdlib.h>
#include"../src/multiplicacao.h"
#define ASSERT_EQ(expected, actual)\
    if((expected) != (actual)){\
        printf("Falhou");\
        exit(1);\
    }else{\
        printf("Funcionou");\
    }

void test_multiplicacao(){
    ASSERT_EQ(0 ,multiplicacao(0, 0));
    ASSERT_EQ(0 ,multiplicacao(2, 0));
    ASSERT_EQ(1 ,multiplicacao(-1, -1));
    ASSERT_EQ(-2 ,multiplicacao(-1, 2));
    ASSERT_EQ(2 ,multiplicacao(1, 2));
}