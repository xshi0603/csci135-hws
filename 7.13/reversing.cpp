/*
Author: Xing Tao Shi
Course: CSCI-135
Instructor: Maryash
Assignment: HW7.13

This program reverses a char string.
*/

#include <iostream>
#include <string>

using namespace std;

void reverse(char s[]) { 

  int size = strlen(s);
  char temp[size]; 
  
  for (int i = 0; i < size; i++) {
    temp[i] = s[i];
  }

  for (int i = 0; i < size; i++) {
    s[i] = temp[size - i - 1];
  }

}

int main() {

  char tester[6] = "Harry";
  char tester2[7] = "Harryz";
  reverse(tester);
  reverse(tester2);
  cout << tester << endl;
  cout << tester2 << endl;
  return 0;

}
