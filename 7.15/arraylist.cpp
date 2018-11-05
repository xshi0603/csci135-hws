/*
Author: Xing Tao Shi
Course: CSCI-135
Instructor:Maryash
Assignment: HW7.15

This program reads ints into an array until the user inputs 0.
*/

#include <iostream>
#include <string>

using namespace std;

int* read_data(int& size) {

  int * arr = new int[size];
  int * temp = new int[size];
  int n = 0;
  int counter = 0;

  for (int i = 0; i < size; i++) {
    arr[i] = 0;
    temp[i] = 0;
  }

  while (cin >> n && n != 0) {
    
    if (counter == size) {
      size *= 2;
      temp = new int[size];
      for (int i = 0; i < size; i++) {
	temp[i] = arr[i];
      }
      for (int i = 0; i < size; i++) {
	arr[i] = temp[i];
      }
    }
    arr[counter] = n;
    counter++;
   
  }

  size = counter;
    
  int * retVal = new int[size];
  for (int i = 0; i < size; i++) {
    retVal[i] = arr[i];
  }    

  delete[] arr;
  delete[] temp;

  return retVal;

}

int main() {
  int size = 10;
  int *arr;
  cout << "Enter any integer. 0 means stop." << endl;
  arr = read_data(size);

  cout << "New size is: " << size << endl;
  cout << "Current array state: " << endl;
  
  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }
  
  delete[] arr;

  return 0;
}
