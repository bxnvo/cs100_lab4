#include "gtest/gtest.h"
#include "../include/Triangle.h"
using shapes::Triangle;


TEST(TriangleTests, testPerimeter) { //pass
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_EQ (aTriangle->getPerimeter(),9);
}

TEST(TriangleTests, testPerimeter2) { //fail
    Triangle *aTriangle = new Triangle(5,4,3);
    EXPECT_EQ (aTriangle->getPerimeter(),12);
}

TEST(TriangleTests, testArea) { //fail
    Triangle *aTriangle = new Triangle(5,4,3);
    EXPECT_EQ (aTriangle->getArea(),6);
}

/* TEST(TriangleTests, testIsIsoceles) { //fail
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_EQ (aTriangle->isIsosceles(),false);
} */

TEST(TriangleTests, testGetKind) { //fail
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_EQ (aTriangle->getKind(), Triangle::Kind::EQUILATERAL);
}

TEST(TriangleTests, testIncorrectInput) { //pass
    //Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_DEATH (Triangle(3,4,5), "First side is not the longest");
}


TEST(TriangleTests, testCorrectInput) { // pass
    EXPECT_NO_THROW (Triangle(5,4,3));
}//expect not throw


TEST(TriangleTests, testArea2) { //pass
    Triangle *aTriangle = new Triangle(6,5,5);
    EXPECT_EQ (aTriangle->getArea(),12);
} //expect area (side 2 = side 3)

TEST(TriangleTests, testIsEquilateral) { //pass
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_EQ (aTriangle->isEquilateral(),true);
}// expect equilateral

TEST(TriangleTests, testGetKind2) { // pass
    Triangle *aTriangle = new Triangle(4,3,3);
    EXPECT_EQ (aTriangle->getKind(), Triangle::Kind::ISOSCELES);
}//expect kind



int main () {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}