#include<stdio.h>
#include<stdlib.h>
#include"divisao.h"
#define ASSERT_EQ(expected, actual)\
    if((expected)!=(actual)){\        
        printf("Falhou");\
        exit(1);\
    }else{\
        printf("Funcionou");\
    }

void test_divisao(){
    ASSERT_EQ(0, divisao(0, 2));
    ASSERT_EQ(0.5, divisao(1, 2));
    ASSERT_EQ(1.0, divisao(2, 2));
    ASSERT_EQ(-1.0, divisao(-2, 2));
    ASSERT_EQ(1.0, divisao(-2, -2));
}