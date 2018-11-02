/*
Author: Xing Tao Shi
Course: CSCI-135
Instructor: Maryash
Assignment: HW8.3

This program reads a file and then takes the average
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
  
  string file_name = "";

  while (file_name == "") {
    cout << "Please input the filename: ";
    //cin >> file_name;
    getline(cin, file_name);
  }

  cout << endl;

  ifstream file;
  file.open(file_name);
  
  string buffer = "";

  int counter = 0;
  double sum = 0;

  while(getline(file, buffer)) {
    counter++;
    sum += stod(buffer);
  }  
   
  double average = sum / counter;

  cout << "The average is: " << average << endl;
 
  return 0;
}
