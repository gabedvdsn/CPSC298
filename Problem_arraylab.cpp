#include <iostream>

using namespace std;

// Have user input 5 numbers, calculate sum and average

int main(int argc, char **argv){
  int input;
  int sum;
  double average;

  for (int i = 0; i < 5; i++) {
    cin >> input;
    sum += input;
  }

  average = static_cast<double>(sum) / 5.0;

  cout << "The total sum is " << sum << endl;
  cout << "The average is " << average << endl;

}
