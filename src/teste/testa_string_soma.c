#include "gtest/gtest.h"
#include "../../string_soma.h"

TEST(CalculadoraString,LerString){
	ASSERT_STREQ("teste", string_soma("teste"));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
