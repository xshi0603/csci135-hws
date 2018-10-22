#include <iostream>

using namespace std;

void sort2(double* p, double* q) {
  double temp = 0;
  if (*p > *q) {
    temp = *p;
    *p = *q;
    *q = temp;
  }
}

int main() {
  double x = 20;
  double y = 15;
  cout << "x: " << x << endl;
  cout << "y: " << y << endl;
  cout << "sorting" << endl;
  sort2(&x, &y);
  cout << "x: " << x << endl;
  cout << "y: " << y << endl;
}
