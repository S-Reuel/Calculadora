#include"../src/multiplicacao.h"
#include"../tests/tests_utils.h"

void test_multiplicacao(){
    ASSERT_EQ(0 ,multiplicacao(0, 0));
    ASSERT_EQ(0 ,multiplicacao(2, 0));
    ASSERT_EQ(1 ,multiplicacao(-1, -1));
    ASSERT_EQ(-2 ,multiplicacao(-1, 2));
    ASSERT_EQ(2 ,multiplicacao(1, 2));
}