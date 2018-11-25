/*
Author: Xing Tao Shi
Course: CSCI-135
Instructor: Maryash
Assignment: HW5.21

Reverses a string via recursion
*/

#include <iostream>
#include <string>

using namespace std;

string reverse(string str) {
  if (str.length() == 1) {
    return str;
  }
  else {
    return str.substr(str.length()-1, 1) + reverse(str.substr(0, str.length()-1));
  }
}

int main() {
  cout << reverse("flow") << endl;
  return 0;
}
