#include"../src/soma.h"
#include"../tests/tests_utils.h"

void test_soma(){
    ASSERT_EQ(5.0, soma(2.0, 3.0));
    ASSERT_EQ(0.0, soma(-1.0, 1.0));
    ASSERT_EQ(-3.0, soma(-1.0, -2.0));
}