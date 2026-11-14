#include"../src/divisao.h"
#include"../tests/tests_utils.h"

void test_divisao(){
    ASSERT_EQ(0, divisao(0, 2));
    ASSERT_EQ(0.5, divisao(1, 2));
    ASSERT_EQ(1.0, divisao(2, 2));
    ASSERT_EQ(-1.0, divisao(-2, 2));
    ASSERT_EQ(1.0, divisao(-2, -2));
}