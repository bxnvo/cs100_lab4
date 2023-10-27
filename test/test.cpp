#include "gtest/gtest.h"
#include "../include/Hailstone.h"

using sequence::satisfiesHailstone;

TEST(HailstoneTESTS,inputNum1) {
    EXPECT_EQ (satisfiesHailstone(1),true);
}

TEST(HailstoneTESTS,inputNum0) {
    EXPECT_EQ (satisfiesHailstone(0),false);
}

TEST(HailstoneTESTS,inputNum20) {
    EXPECT_EQ (satisfiesHailstone(20),true);
}