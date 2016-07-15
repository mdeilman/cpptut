#ifndef GEOMETRY_TEST_HPP_
#define GEOMETRY_TEST_HPP_

#include "gtest/gtest.h"
#include "geometry.h"

TEST(GeometryTests, AreaOfSquareTest){
  EXPECT_DOUBLE_EQ(25, area_of_square(5,5));
  EXPECT_DOUBLE_EQ(1, area_of_square(1,1));
  EXPECT_DOUBLE_EQ(100, area_of_square(10,10));
}

TEST(GeometryTests, AreaOfSquareWhereSidesAreNotEqualtest){
  ASSERT_TRUE(area_of_square(3, 4) == 0);
}

TEST(GeometryTests, AreaOfTriangle){
  EXPECT_DOUBLE_EQ(15, area_of_triangle(6,5));
}

TEST(GeometryTests, AreaOfCircle){
  EXPECT_DOUBLE_EQ(113.09724, area_of_circle(6));
}
#endif // GEOMETRY_TEST_HPP_
