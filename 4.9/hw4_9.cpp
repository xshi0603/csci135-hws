/*
Author: Xing Tao Shi
Course: CSCI-135
Instructor: Maryash
Assignment: HW4.9

These are the reorder problems from the textbook.
*/

// #1

bool found = false;
string target = str.substr(0, 1);
int position = 0;
while (!found && position < str.length())
  {
    string ch = str.substr(position, 1);
    if (ch == target) { found = true; }
    else { position++; }
  }
if (!found) { cout << target << endl; }

// #2

bool found = false;
string target = str.substr(i, 1);
int position = 0;
string ch = "?";
while (!found && position < str.length())
  {
    ch = str.substr(position, 1);
    if (ch == target && position != i) { found = true; }
    else { position++; }
  }
if (!found) { cout << target << endl; }

// #3

for (int i = 0; i < str.length(); i++)
  {
    bool found = false;
    int position = 0;
    string target = str.substr(i, 1);
    while (!found && position < str.length())
      {
	string ch = str.substr(position, 1);
	if (ch == target && position != i) { found = true; }
	else { position++; }
      }
    if (!found) { cout << target << endl; }


  }
