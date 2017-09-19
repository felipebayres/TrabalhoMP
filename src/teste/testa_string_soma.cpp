#include "gtest/gtest.h"
#include "../../include/string_soma.h"

TEST(CalculadoraString,LerString){
	ASSERT_EQ(0, string_soma(""));
}

TEST(CalculadoraString,SomaSimples){
	ASSERT_EQ(9, string_soma("2,3,4"));
}
TEST(CalculadoraString,NumeroNegativo){
	ASSERT_EQ(-1, string_soma("-3,3,4"));
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
