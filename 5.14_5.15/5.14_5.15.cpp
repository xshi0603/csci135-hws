/*
Author: Xing Tao Shi
Course: CSCI-135
Instructor: Maryash
Assignment: HW5.14/5.15

This program takes the reference to two/three ints and then 
sorts them.
*/

#include <iostream>

using namespace std;

void sort2(int& a, int& b) {

  int temp = 0;
  if (a > b) {
    temp = b;
    b = a;
    a = temp;
  }
}

void sort3(int& a, int& b, int& c) {

  if (a > b) {
    sort2(a, b);
  }
  if (b > c) {
    sort2(b, c);
  }
}

int main() {

  int first = 10;
  int second = 20;
  int third = 15;
  cout << first << endl;
  cout << second << endl;
  cout << third << endl;
  sort3(first, second, third);
  cout << first << endl;
  cout << second << endl;
  cout << third << endl;
  return 0;

}
