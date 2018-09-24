#include <iostream>
#include <string>
using namespace std;

int find_occurrence(string str, string ch, int n);
string replace_at(string str, int position, string replacement);

/**
   Replaces all pairs of straight quotes with curly quotes.
   @param str the string to process
   @return str with adjacent pairs of straight quotes changed to
   curly quotes
*/
string smart_quotes(string str)
{
  string result = str;
  string left_quote = "“";
  string right_quote = "”";
  int num_quotes = 0;

  for (int i = 0; i < str.length(); i++) {
    if (str.substr(i, 1) == "\"") {
      num_quotes += 1;
    }
  }

  if (num_quotes % 2 == 1) {
    num_quotes -= 1;
  }

  for (int i = 1; i <= num_quotes; i++) {
    int pos = find_occurrence(result ,"\"", 1);
    if (i % 2 == 1) {
      result = replace_at(result, pos, left_quote);
    }
    else {
      result = replace_at(result, pos, right_quote);
    }
  }   
  return result;
}

/**
   Finds the nth occurrence of a given character in a string.
   @param str the string
   @param ch the character to search
   @param n the occurrence count
   @return the position of the nth occurrence of ch in str, or -1
         if ch doesn't occur n times.
*/
int find_occurrence(string str, string ch, int n)
{
  int currCount = 0;

  for (int i = 0; i < str.length(); i++) {
    if (str.substr(i, 1) == ch) {
      currCount += 1;
      if (currCount == n) {
        return i;
      }
    }
  }

  return -1;
}


/**
   Replaces a character of a string at a given position.
   @param str the string where the replacement takes place
   @param position the position of the character to be replaced
   @param replacement the replacement string
   @return str with the character at the position changed to 
      the replacement string, or the original string
      if position was not valid.
*/
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

}

int main() {
  cout << smart_quotes("He said \"Hello, World\"") << endl;
}
