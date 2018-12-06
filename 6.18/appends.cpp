#include <iostream>
#include <vector>

using namespace std;

vector<int> append(vector<int> a, vector<int> b) {

  vector<int> retVal;

  for (int x : a) {
    retVal.push_back(x);
  }

  for (int x : b) {
    retVal.push_back(x);
  }

  return retVal;

}

int main() {

  vector<int> a = {10, 11, 12, 13};
  vector<int> b = {10, 11, 12, 13, 14};

  vector<int> c = append(a, b);

  for (int x: c) {
    cout << x << endl;
  }


  return 0;
}
