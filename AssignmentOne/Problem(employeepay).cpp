// Employee pay program, assignment 1 problem 3

#include <iostream>

using namespace std;

// Main function
int main(int argc, char **argv){

  // Define pertinent vars
  double payPerHour = 16.00;
  double socialSecurityTax = .06;
  double federalIncomeTax = .14;
  double stateIncomeTax = .05;
  double medicalInsurance = 10.0;

  double hoursWorked;
  double grossIncome = 0.0;
  double netIncome = 0.0;

  // Get input
  cout << "How many hours did you work this week?" << endl;
  cin >> hoursWorked;

  // Calculations
  grossIncome += 40 * payPerHour;
  if (hoursWorked > 40) {
    grossIncome += (hoursWorked - 40) * (3.0/2.0 * payPerHour);
  }
  netIncome = (grossIncome - (grossIncome * socialSecurityTax) - (grossIncome * federalIncomeTax) - (grossIncome * stateIncomeTax) - medicalInsurance);

  // Output
  cout << "Your gross income this week was: $" << grossIncome << endl;
  cout << "Taxes and deductions as follows..." << endl;
  cout << "Social Security Tax: -$" << grossIncome * socialSecurityTax << endl;
  cout << "Federal Income Tax: -$" << grossIncome * federalIncomeTax << endl;
  cout << "State income Tax: -$" << grossIncome * stateIncomeTax << endl;
  cout << "Weekly medical insurance deduction: -$" << medicalInsurance << endl;
  cout << "Your net income this week is $" << netIncome << endl;

  return 0;

}
