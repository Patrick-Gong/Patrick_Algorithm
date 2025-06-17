#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int N;
  cin >> N;
  vector<int> v(N, 0);
  int cnt = 0;

  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  for (int i = N - 1; i >= 0; i--) {
    int l = 0, r = N - 1;
    while (l < r) {
      if (v[l] + v[r] == v[i]) {
        if (i != l && i != r) {
          cnt++;
          break;
        } else if (i == l) {
          l++;
        } else if (i == r) {
          r--;
        }
      } else if (v[l] + v[r] > v[i]) {
        r--;
      } else {
        l++;
      }
    }
  }

  cout << cnt;
  return 0;
}