// INVOICE_HPP_
#ifndef INVOICE_HPP_
#define INVOICE_HPP_

#include <iostream>
#include <string>

double compute_sub_total(double items[], int count){

  double total = 0.0;

  for (int i = 0 ; i < count ; i++){
    total = total + items[i];
  }
  return total;
}

double apply_discount(double subtotal){
  return subtotal * (1.0 - 0.05);
}

double apply_sales_tax(double sub_total){
  return sub_total * (1.0 + 0.09725);
}

double compute_invoice(double items[], int count){

  double total = 0.0;

  total = compute_sub_total(items,count);
  total = apply_discount(total);
  total = apply_sales_tax(total);

  return total;
}

#endif // INVOICE_HPP_
