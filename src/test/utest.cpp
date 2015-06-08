#include <gtest/gtest.h>

#include "../Actuation.cpp"

using namespace std;

TEST(Actuation, testCase1) {
    Actuation a;
    EXPECT_EQ(a.test(), 2);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
