#include<stdio.h>
#include<stdlib.h>
#include"../src/soma.h"

#define ASSERT_EQ(expected, actual)\
    if ((expected) != (actual)){\
        printf("Falhou");\
        exit(1);\
    } else{\
        printf("Funcionou");\
    }

void test_soma(){
    ASSERT_EQ(5.0, soma(2.0, 3.0));
    ASSERT_EQ(0.0, soma(-1.0, 1.0));
    ASSERT_EQ(-3.0, soma(-1.0, -2.0));
}