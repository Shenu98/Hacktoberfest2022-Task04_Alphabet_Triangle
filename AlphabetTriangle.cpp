#include <iostream>
using namespace std;
int main() {
  char ch = 'A';
  int a, b, c, d;
  for (a = 1; a <= 5; a++) {
    for (b = 5; b >= a; b--) cout << " ";
    for (c = 1; c <= a; c++) cout << ch++;
    ch--;
    for (d = 1; d < a; d++) cout << --ch;
    cout << "\n";
    ch = 'A';
  }
  return 0;
}
