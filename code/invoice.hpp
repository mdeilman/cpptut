#ifndef INVOICE_HPP_
#define INVOICE_HPP_

#include <iostream>
#include <string>


double compute_invoice(double items[], int count){

  double total = 0.0;

  for (int i = 0 ; i < count ; i++){
    total = total + items[i];
  }

  total = total * (1.0 - 0.05);

  total = total * (1.0 + 0.09725);

  return total;
}


/*
double compute_sub_total(double[items], int count){

  double total = 0.0;

  for (int i = 0 ; i < count ; i++){
    total = total + items[i];
  }

  return total;
}
*/

#endif // INVOICE_HPP_
