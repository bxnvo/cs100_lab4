#include "gtest/gtest.h"
#include "../include/Hailstone.h"

using sequence::satisfiesHailstone;

TEST(HailstoneTESTS,input1) {
    EXPECT_EQ (satisfiesHailstone(1),true);
}

TEST(HailstoneTESTS,input0) {
    EXPECT_EQ (satisfiesHailstone(0),false);
}

TEST(HailstoneTESTS,inputEven) {
    EXPECT_EQ (satisfiesHailstone(20),true);
}

TEST(HailstoneTESTS,inputOdd) {
    EXPECT_EQ (satisfiesHailstone(21),true);
}