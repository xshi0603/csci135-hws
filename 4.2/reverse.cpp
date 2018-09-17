/*
Author: Xing Tao Shi
Course: CSCI-135
Instructor: Maryash
Assignment: HW4.2

This program prompts the user for a word and then prints it out in reverse.
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "Enter a word: " << endl;
  
  /* Implement this pseudocode:
   s = Read user input
   r = ""        
   i = 0        
   while i < length of s
      c = ith character of s
      r = c + r
      i++
   Print r  
  */

  string s = ""; //user input
  cin >> s;

  string c = ""; //instaning variables
  string r = "";
  int i = 0;

  while (i < s.length()) { //reversing
      c = s.at(i);
      r = c + r;
      i++;
  }

  cout << r << endl; //printing out
  
  return 0;
}
