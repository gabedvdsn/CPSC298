/*
Implement a void function called zeroBoth that has two call-by-reference
parameters, both of which are variables of type int, and sets thevalues
of both variables to 0.
*/

#include <iostream>

using namespace std;

void zeroBoth(int &varOne, int &varTwo){
  cout << "Calling function zeroBoth.." << endl;
  varOne = 0;
  varTwo = 0;
}

int main(int argc, char **argv){
  // Define pertinent vars
  int inputOne;
  int inputTwo;

  cout << "Input two integers: " << endl;
  cin >> inputOne;
  cin >> inputTwo;
  cout << "Your inputs are: " << inputOne << ", " << inputTwo << "." << endl;

  zeroBoth(inputOne, inputTwo);

  cout << "Your new inputs are: " << inputOne << ", " << inputTwo << "." << endl;

  return 0;
}
