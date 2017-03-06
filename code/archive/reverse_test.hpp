#ifndef REVERSE_TEST_HPP_
#define REVERSE_TEST_HPP_

#include "gtest/gtest.h"
#include "reverse.hpp"

TEST(StringReverseTest, reverse){

  EXPECT_EQ(reverse("a"),"a");
  EXPECT_EQ(reverse("ba"),"ab");
  EXPECT_EQ(reverse("opel"),"lepo");
  EXPECT_EQ(reverse("hello"),"olleh");
  EXPECT_EQ(reverse("a long string"),"gnirts gnol a");
}

#endif // REVERSE_TEST_HPP_
