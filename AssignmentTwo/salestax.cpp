/*
Implement a function called addTax. The function addTax has two formal
parameters: taxRate(float), which is the amount of sales tax expressed
as a percent; and cost(float), which is the cost of an item before tax.
The function returnsthe value(float)of cost so that it includes sales tax.
*/

#include <iostream>

using namespace std;

float addTax(float salesTax, float cost){
  cout << "Applying tax..." << endl;
  return (salesTax / 100.0) * cost + cost;
}

int main(int argc, char **argv){
  //Define pertinent vars
  float userCost;
  float userTaxRate;
  float costAfterTax;

  cout << "Input cost: ";
  cin >> userCost;

  cout << "Input tax rate as a percentage (7.25, for example): ";
  cin >> userTaxRate;

  costAfterTax = addTax(userTaxRate, userCost);

  cout << "Your final cost after tax is: " << costAfterTax << "." << endl;

  return 0;
}
