#include <gtest/gtest.h>
#include <Example.h>

TEST(ExampleTests, DemonstrateGTestMacro) {
    EXPECT_EQ(true, true);
    EXPECT_EQ(Add(1, 2), 3);
}
