/*
Author: Xing Tao Shi
Course: CSCI-135
Instructor: Maryash
Assignment: HW6.6

Given an array, swap the order of elements
*/

#include <iostream>

using namespace std;

void swap(int& a, int& b) {

  int temp = a;
  a = b; 
  b = temp;

}

void reverse(int input[], int size) {

  for (int i = 0; i < size / 2; i++) { 

    swap(input[i], input[size - 1 - i]);

  } 

}

void print_arr(int input[], int size) {

  for (int i = 0; i < size; i++) {
    cout << input[i] << endl;
  }

}

int main() {

  int tester[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int tester2[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
  print_arr(tester, 10);
  reverse(tester, 10);
  print_arr(tester, 10);
  print_arr(tester2, 11);
  reverse(tester2, 11);
  print_arr(tester2, 11);

}
