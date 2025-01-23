#include <iostream>
using namespace std;

int main() {
  int N;
  int sum = 0, input;
  cin >> N;

  for (int i = 0; i < N; i++) {
    int tmp = 0;
    cin >> input;

    for (int k = 1; k <= input; k++) {
      if (input % k == 0) {
        tmp++;
      }
    }
    if (tmp == 2) {
      sum++;
    }
  }

  cout << sum << "\n";
  return 0;
}