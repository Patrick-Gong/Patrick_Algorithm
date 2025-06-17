#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int l = 1, r = 1;

  int cnt = 0;

  while (r <= N) {
    double sum = (l + r) / 2.0 * (r - l + 1);
    if (sum > N) {
      l++;
    } else if (sum == N) {
      r++;
      cnt++;
    } else {
      r++;
    }
  }

  cout << cnt;

  return 0;
}