#include <gtest/gtest.h>

extern "C" {
    #include "..\src\Example.h"
}

TEST(ExampleTests, DemonstrateGTestMacro) {
    EXPECT_EQ(true, true);
    EXPECT_EQ(Add(1, 2), 3);
}
