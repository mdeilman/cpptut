// REVERSE_TEST_HPP_
#ifndef REVERSE_TEST_HPP_
#define REVERSE_TEST_HPP_

#include "gtest/gtest.h"
#include "invoice.hpp"

TEST(ApplySalesTaxTest, apply_sales_tax){
  double subtotal = 1.0;
  ASSERT_DOUBLE_EQ(apply_sales_tax(subtotal), 1.09725);
}

TEST(ApplyDiscountTest, apply_discount){
  double subtotal = 1.0;
  ASSERT_DOUBLE_EQ(apply_discount(subtotal), 0.95);
}

TEST(SubTotalTest, compute_sub_total){
  double bag[] = {23.95, 14.99, 12.39};
  ASSERT_DOUBLE_EQ(compute_sub_total(bag,3), 51.33);
}

TEST(InvoiceTest, compute_invoice){
  double bag[] = {23.95, 14.99, 12.39};
  ASSERT_DOUBLE_EQ(compute_invoice(bag,3), 53.505750374999998);
}

#endif // REVERSE_TEST_HPP_
