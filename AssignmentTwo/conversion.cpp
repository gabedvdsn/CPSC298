/*
Write a program that will read in a length in feet and inches and output the
equivalent length in meters and centimeters. Use at least three functions: one
for user input,one or more for calculating, and one for output(console).
Include a loop that lets the user repeat this computation for new input values
until the user says he or she wants to end the program(user has to type exit).
There are 0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches
in a foot.
*/

#include <iostream>
#include <cmath>

using namespace std;

// Get user inputs for feet and inches
void GetUserInput(double& feet, double& inches){
  cout << "Feet: ";
  cin >> feet;
  cout << "Inches: ";
  cin >> inches;

}

// Conversion function
void ConvertToMCM(double feet, double inches, double& meters, double& centimeters){
  // Define pertinent vars
  double metersInFeet = 0.3048;
  double centimetersInMeter = 100.0;
  double inchesInFeet = 12.0;

  // Calculate
  double totalMeters = (feet * metersInFeet) + ((inches / inchesInFeet) * metersInFeet);

  // Transfer values into vars
  meters = floor(totalMeters);
  centimeters = (totalMeters - floor(totalMeters)) * centimetersInMeter;

}

// Out put results
void Output(double feet, double inches, double meters, double centimeters){
  cout << feet << " feet and " << inches << " inches == " << meters << " meters and " << centimeters << " centimeters." << endl;
}

int main(int argc, char **argv){
  // Define pertinent vars
  double feet;
  double inches;
  double meters;
  double centimeters;

  // Flow of program
  GetUserInput(feet, inches);
  ConvertToMCM(feet, inches, meters, centimeters);
  Output(feet, inches, meters, centimeters);

  return 0;
}
