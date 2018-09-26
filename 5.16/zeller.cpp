/*
Author: Xing Tao Shi
Course: CSCI-135
Instructor: Maryash
Assignment: HW5.16

Given the date, month, and year, this program is able to figure out which weekday
the given date is.
*/

#include <iostream>

using namespace std;

int zeller(int d, int mm, int y) {

  if (mm == 13 || mm == 14) {
    y -= 1;
  }
  
  int w = d + 5;

  int partA = 0;
  int partB = 0;
  int partC = 0;

  partA = ((26 * (mm + 1)) / 10);
  partB = (5 * (y % 100)) / 4;
  partC = (21 * (y / 100)) / 4;

  w += partA + partB + partC;
  
  w = w % 7;

  return w;
  
}


int main() {

  // prints the first week of every month of 2018
  for (int i = 3; i < 15; i++){
    for(int j = 1; j < 8; j++){
      cout << i << "-" << j << "-2018: " << zeller(j, i, 2018) << endl;
    }
  }

  return 0;
}
