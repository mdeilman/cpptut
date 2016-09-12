#ifndef REVERSE_TEST_HPP_
#define REVERSE_TEST_HPP_

#include "gtest/gtest.h"
#include "invoice.hpp"

TEST(InvoiceTest, compute_invoice){

  double bag[] = {23.95, 14.99, 12.39};
  EXPECT_EQ(compute_invoice(bag,3), 53.5058);
}

#endif // REVERSE_TEST_HPP_
