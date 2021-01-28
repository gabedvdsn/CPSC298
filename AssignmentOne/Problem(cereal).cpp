// Cereal program, assignment 1 problem 1

#include <iostream>

using namespace std;

// Main function
int main(int argc, char **argv){
  double ouncesPerTon = 35273.92;
  // Define pertinent vars
  int weightBox;
  int numBoxes;
  int tonsInBox;

  // Get input
  cout << "How many ounces are in the box of cereal?" << endl;
  cin >> weightBox;

  // Calculation
  numBoxes = ouncesPerTon / weightBox;

  // Output
  cout << "There are " << weightBox / ouncesPerTon << " metric tons of cereal in the box!" << endl;
  cout << "To equal one metric ton of cereal, you would need about " << numBoxes << " boxes of cereal!" << endl;

  return 0;

}
