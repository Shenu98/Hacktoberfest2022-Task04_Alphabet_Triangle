#include <iostream>
using namespace std;
int main() {
  char ch = 'A';
  int s, t, k, m;
  for (s = 1; i <= 5; i++) {
    for (t = 5; t >= s; t--) cout << " ";
    for (k = 1; k <= s; k++) cout << ch++;
    ch--;
    for (m = 1; m < s; m++) cout << --ch;
    cout << "\n";
    ch = 'A';
  }
  return 0;
}
