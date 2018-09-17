/*
Author: Xing Tao Shi
Course: CSCI-135
Instructor: Maryash
Assignment: HW4.6

This program prompts the user for two units and then a number.
It then converts said number from the first unit provided to the
second.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
  bool done = false;
  string unit1 = "";
  string unit2 = "";
  double factor1 = 0; // conversion factor from first unit to cm
  double factor2 = 0; // conversion factor from cm to second unit
   
  while (!done)
    {
      bool again = false; // true to repeat the same conversion
      cout << "From unit (in, cm, m, again, quit): " << endl;
      string command;
      cin >> command;
      if (command == "in")
	{
	  factor1 = 2.54; 
	  unit1 = command;
	}
      else if (command == "cm")
	{
	  factor1 = 1;
	  unit1 = command;
	}
      else if (command == "m")
	{
	  factor1 = 100;
	  unit1 = command;
	}
      else if (command == "again")
	{
	  again = true;
	}
      else if (command == "quit")
	{
	  done = true;
	}
      else
	{
	  cout << "Sorry, unknown unit." << endl;
	}
      
      if (factor1 != 0 && !again && !done)
	{
	  cout << "To unit: " << endl;
	  cin >> unit2;
	  if (unit2 == "in")
	    {
	      factor2 = 1.0 / 2.54;
	    }
	  else if (unit2 == "cm")
	    {
	      factor2 = 1;
	    }
	  else if (unit2 == "m")
	    {
	      factor2 = 1.0 / 100;
	    }
	  else
	    {
	      cout << "Sorry, unknown unit." << endl;
	    }
	}
      
      if (factor1 != 0 && factor2 != 0 && !done)  {
	//cout << "Please input the number you want converted: ";
	double input = 0;
	cin >> input;
	double converted = 0; 
	converted = input * factor1;
	converted *= factor2;
	cout << input << " " << unit1 << " = " << converted << " " << unit2 << endl;       
      }
    }
  return 0;
}
