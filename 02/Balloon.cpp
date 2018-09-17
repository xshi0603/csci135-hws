/*
Author: Xing Tao Shi
Course: CSCI-135
Instructor: Maryash
Assignment: HW2

This program asks the user to input a diameter and then calculates
the volume. After doing this, it adds 1 to the diameter and tells
the user the increase of volume twice.
*/

/*
Prompt for diameter and read user input
volume1 = π × diameter × diameter × diameter / 6
diameter++
volume2 = π × diameter × diameter × diameter / 6
growth = volume2 - volume1
Print growth
diameter++
volume3 = π × diameter × diameter × diameter / 6
growth = volume3 - volume2
Print growth
*/

#include <iostream>

using namespace std;

int main() {
  const double PI = 3.141592653589793;

  cout << "Diameter: ";
  int diameter = 0;
  cin >> diameter;

  int volume1 = 0;
  int volume2 = 0;
  int volume3 = 0;
  int growth = 0;

  volume1 = PI * diameter * diameter * diameter / 6;
  diameter++;
  volume2 = PI * diameter * diameter * diameter / 6;
  growth = volume2 - volume1;
  cout << "Increase: " << growth << endl;

  diameter++;
  volume3 = PI * diameter * diameter * diameter / 6;
  growth = volume3 - volume2;
  cout << "Increase: " << growth << endl;

  return 0;
}
