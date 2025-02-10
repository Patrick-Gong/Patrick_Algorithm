#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, cnt = 0;
  int l, r;

  cin >> N;
  vector<int> vec(N);

  for (int i = 0; i < N; i++) {
    cin >> vec[i];
  }
  sort(vec.begin(), vec.end());

  for (int i = 0; i < N; i++) {
    int l = 0, r = N - 1, sum;

    while (l < r) {
      sum = vec[l] + vec[r];
      if (vec[i] < sum) {
        r--;
      } else if (vec[i] > sum) {
        l++;
      } else {
        if (l != i && r != i) {
          cnt++;
          break;
        } else if (l == i) {
          l++;
        } else {
          r--;
        }
      }
    }
  }

  cout << cnt;
}