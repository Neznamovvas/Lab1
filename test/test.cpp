#include <gtest/gtest.h>
#include "../include/binary.h"

TEST(BinTest, Zero) {
    EXPECT_EQ(binaryRepr(0), "00000000000000000000000000000000");
}

TEST(BinTest, SmallNumbers) {
    EXPECT_EQ(binaryRepr(5), "00000000000000000000000000000101");
}

TEST(BinTest, PowersOfTwo) {
    EXPECT_EQ(binaryRepr(32), "00000000000000000000000000100000");
}

TEST(BinTest, LargeNumbers) {
    EXPECT_EQ(binaryRepr(21345), "00000000000000000101001101100001");
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}