

/*
Write a program that will read up to ten nonnegative integers into an
array called numberArray and then write/printthe integers back to the
screen(console output). For this exercise you need notuse any functions.
*/

#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  // Define pertinent vars
  unsigned int i;
  int arraySize = 10;
  int numberArray[10] = {};

  // Gather inputs from user
  for (i=0; i<arraySize; i++){
    cout << "Input a nonnegative integer: ";
    cin >> numberArray[i];
    cout << endl;

    // Check whether input is nonnegative
    // Have user reinput if number is negative
    while (numberArray[i] < 0) {
      cout << "Please input a nonnegative integer: ";
      cin >> numberArray[i];
      cout << endl;
    }
  }

  // Output
  for (i=0; i<arraySize; i++){
    cout << numberArray[i] << endl;
  }
}
