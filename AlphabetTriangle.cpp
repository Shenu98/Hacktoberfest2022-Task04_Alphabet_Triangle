#include <iostream>
using namespace std;
int main() {
  char charx = 'A';
  int x, y, a, b;
  for (x = 1; x <= 5; x++) {
    for (y = 5; y >= x; y--) cout << " ";
    for (a = 1; a <= x; a++) cout << charx++;
    charx--;
    for (b = 1; b < x; b++) cout << --charx;
    cout << "\n";
    charx = 'A';
  }
  return 0;
}
