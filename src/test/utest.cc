#include <gtest/gtest.h>

#include <vector>

using namespace std;

TEST(vector, testCase1) {
    EXPECT_EQ(2, 2);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
