// Fire capacity program, assignment 1 problem 2

#include <iostream>

using namespace std;

int main(int argc, char **argv){
  int roomCapacity;
  int numAttending;

  cout << "What is the room's maximum capacity?" << endl;
  cin >> roomCapacity;
  cout << "How many people will attend?" << endl;
  cin >> numAttending;

  if (numAttending <= roomCapacity){
    cout << "This is legal." << endl;
  } else {
    cout << "This is illegal!" << endl;
  }

  return 0;

}
