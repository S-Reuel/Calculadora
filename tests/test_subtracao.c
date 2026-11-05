#include"../src/subtracao.h"
#include"tests_utils.h"

void test_subtracao(){
    ASSERT_EQ(1.0, subtracao(2.0, 1.0));
    ASSERT_EQ(-1.0, subtracao(1.0, 2.0));
    ASSERT_EQ(-2.0, subtracao(-1.0, 1.0));
    ASSERT_EQ(2.0, subtracao(1.0, -1.0));
    ASSERT_EQ(0.0, subtracao(-1.0, -1.0));
    ASSERT_EQ(0.0, subtracao(1.0, 1.0));
}