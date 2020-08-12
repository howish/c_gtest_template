#include <gtest/gtest.h>

extern "C" {
    #include <Arithmetics.h>
}

TEST(TestAdd, TestAddInts) {
    EXPECT_EQ(Add(3, 2), 5);
    EXPECT_EQ(Add(1, 2), 3);
    EXPECT_EQ(20, Add(17, 3));
}

TEST(TestAdd, TestAddPoints) {
    Point a = (Point){2, 3};
    Point b = (Point){3, -5};
    Point c = (Point){5, -2};

    EXPECT_TRUE(IsSamePoint(AddPoint(a, b), c)) << "Not same";
}
