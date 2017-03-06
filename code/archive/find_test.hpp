#ifndef FIND_TEST_HPP_
#define FIND_TEST_HPP_

#include "gtest/gtest.h"
#include <algorithm>
#include <string>

#include "find.hpp"

// FindTestSimple

TEST(FindTestSimple, findFindsValueInStringArray0){
  std::string fruits[] = {"apple", "banana", "cranberry","orange"};
  std::string actual = find_simple("banana", fruits, 0, 3);
  ASSERT_STREQ("banana", actual.c_str());
}

TEST(FindTestSimple, findFindsValueInStringArray1){
  std::string fruits[] = {"apple", "banana", "cranberry","orange"};
  std::string actual = find_simple("apple", fruits, 0, 3);
  ASSERT_STREQ("apple", actual.c_str());
}

TEST(FindTestSimple, findFindsValueInStringArray2){
  std::string fruits[] = {"apple", "banana", "cranberry","orange"};
  std::string actual = find_simple("orange", fruits, 0, 3);
  ASSERT_STREQ("orange", actual.c_str());
}

TEST(FindTestSimple, findFindsValueInStringArray3){
  std::string fruits[] = {"apple", "banana", "cranberry","orange"};
  std::string search_item = "cranberry";
  std::string actual = find_simple(search_item, fruits, 0, 3);
  ASSERT_STREQ(search_item.c_str(), actual.c_str());
}

TEST(FindTestSimple, findFindsValueInStringArraySorted){
  std::string numbers[] = {"2", "3", "4", "5"};
  std::string actual = find_simple("5", numbers, 0, 3);
  ASSERT_STREQ("5", actual.c_str());
}

TEST(FindTestSimple, findFindsValueInStringArrayUnsorted){
  std::string numbers[] = {"5", "4", "3", "2"};
  std::string actual = find_simple("5", numbers, 0, 3);
  ASSERT_STREQ("5", actual.c_str());
}

// FindTestFast

TEST(FindTestFast, findFindsValueInStringArray0){
  std::string fruits[] = {"apple", "banana", "cranberry","orange"};
  std::string actual = find_fast("banana", fruits, 0, 3);
  ASSERT_STREQ("banana", actual.c_str());
}

TEST(FindTestFast, findFindsValueInStringArray1){
  std::string fruits[] = {"apple", "banana", "cranberry","orange"};
  std::string actual = find_fast("apple", fruits, 0, 3);
  ASSERT_STREQ("apple", actual.c_str());
}

TEST(FindTestFast, findFindsValueInStringArray2){
  std::string fruits[] = {"apple", "banana", "cranberry","orange"};
  std::string actual = find_fast("orange", fruits, 0, 3);
  ASSERT_STREQ("orange", actual.c_str());
}

TEST(FindTestFast, findFindsValueInStringArray3){
  std::string fruits[] = {"apple", "banana", "cranberry","orange"};
  std::string search_item = "cranberry";
  std::string actual = find_fast(search_item, fruits, 0, 3);
  ASSERT_STREQ(search_item.c_str(), actual.c_str());
}

TEST(FindTestFast, findFindsValueInStringArraySorted){
  std::string numbers[] = {"2", "3", "4", "5"};
  std::string actual = find_fast("5", numbers, 0, 3);
  ASSERT_STREQ("5", actual.c_str());
}

// Negative Test - Unsorted arrays don't work
TEST(FindTestFast, findFindsValueInStringArrayUnsorted){
  std::string numbers[] = {"5", "4", "3", "2"};
  std::string actual = find_fast("5", numbers, 0, 3);
  ASSERT_STRNE("5", actual.c_str());
}

#endif // FIND_TEST_HPP_
