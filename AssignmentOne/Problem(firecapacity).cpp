// Fire capacity program, assignment 1 problem 2

#include <iostream>

using namespace std;

// Main function
int main(int argc, char **argv){
  // Define pertinent vars
  int roomCapacity;
  int numAttending;

  // Get inputs
  cout << "What is the room's maximum capacity?" << endl;
  cin >> roomCapacity;
  cout << "How many people will attend?" << endl;
  cin >> numAttending;

  // Evaluations
  if (numAttending <= roomCapacity){
    cout << "This is legal." << endl;
  } else {
    cout << "This is illegal!" << endl;
  }

  return 0;

}
