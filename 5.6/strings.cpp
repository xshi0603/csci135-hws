/*
Author: Xing Tao Shi
Course: CSCI-135
Instructor: Maryash
Assignment: HW5.6A

Replaces a character of a string at a given position.
@param str the string where the replacement takes place
@param position the position of the character to be replaced
@param replacement the replacement string
@return str with the character at the position changed to 
the replacement string, or the original string
if position was not valid.
*/

#include <string>
using namespace std;

string replace_at(string str, int position, string replacement) 
{
  
  if (position < str.length()) {
    string firstHalf = str.substr(0, position);
    string secondHalf = str.substr(position + 1, str.length() - position - 1);
    
    string newWord = firstHalf + replacement + secondHalf;
    
    return newWord;
  }
  else {
    return str;
  }
  /*    
    TESTING
    
    string a = excellent
    replace_at(excellent, 5, p)
    expecting excelpent
    (

   */ 
}
