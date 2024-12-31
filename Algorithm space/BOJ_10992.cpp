#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    if (i == 0) {
      for (int k = 0; k < n + 1; k++) {
        if (k == n - 1) {
          cout << "*";
        } else {
          cout << " ";
        }
      }
    } else if (i > 0 && i < n - 1) {
      for (int k = 0; k < n + i + 1; k++) {
        if (k == (n - 1) - i || k == (n - 1) + i) {
          cout << "*";
        } else {
          cout << " ";
        }
      }
    } else {
      for (int k = 0; k < 2 * n - 1; k++) {
        cout << "*";
      }
    }
    cout << endl;
  }
}