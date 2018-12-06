#include <iostream>
#include <vector>
#include <string>

using namespace std;

void sort(vector<string>& a) {

  vector<string> temp;

  for (string x: a) {
    if (isupper(x[0])) {
      temp.push_back(x);
    }
  }

  for (string x: a) {
    if (islower(x[0])) {
      temp.push_back(x);
    }
  }

  a.swap(temp);

}

int main() {

  vector<string> a = {"Hello", "world", "Great", "work", "Team"};

  sort(a);
  
  for (string x: a) {
    cout << x << endl;
  }

  return 0;
}
