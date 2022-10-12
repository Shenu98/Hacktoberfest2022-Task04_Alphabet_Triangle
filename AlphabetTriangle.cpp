#include <iostream>
using namespace std;
int main() {
  char ch = 'A';
  int a, b, c, m;
  for (a = 1; a <= 5; a++) {
    for (b = 5; b >= a; b--) cout << " ";
    for (c = 1; c <= a; c++) cout << ch++;
    ch--;
    for (m = 1; m < i; m++) cout << --ch;
    cout << "\n";
    ch = 'A';
  }
  return 0;
}
