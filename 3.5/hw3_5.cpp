/*
Author: Xing Tao Shi
Course: CSCI-135
Instructor: Maryash
Assignment: HW3.5

This program takes in how many children/adults there
are in a group and returns the most efficient tickets
to buy.
*/

#include <iostream>
#include <string>

using namespace std;

void park (int children, int adults) {

  if (adults + children >= 10) 
    {
      cout << "Buy group pass" << endl;
    }
  else if (adults >= 2) 
    {
      if (children >= 3) 
	{
	  cout << "Buy family pass" << endl;
	}
      else 
	{
	  cout << "Buy only individual tickets" << endl;
	}   
    }

  else if (adults >= 1) 
    {
      if (children >= 4) 
	{
	  cout << "Buy family pass" << endl;
	}
      else 
	{
	  cout << "Buy only individual tickets" << endl;
	}        
    }
}


int main () {

  park(10,5);
  park(2,2);
  park(3,2);
  park(5,1);
  park(3,1);

}
