#include <iostream>
using namespace std;
int main() {
  char ch = 'A';
  int x, y, p, h;
  for (x = 1; x <= 5; x++) {
    for (y = 5; y >= x; y--) cout << " ";
    for (p = 1; p <= x; p++) cout << ch++;
    ch--;
    for (h = 1; h < i; h++) cout << --ch;
    cout << "\n";
    ch = 'A';
  }
  return 0;
}
