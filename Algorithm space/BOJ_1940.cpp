#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M;
  vector<int> v;

  cin >> N;
  cin >> M;
  int l = 0, r = N - 1;
  int cnt = 0;
  for (int i = 0; i < N; i++) {
    int k;
    cin >> k;
    v.push_back(k);
  }

  sort(v.begin(), v.end());

  while (l < r) {
    if (v[l] + v[r] < M) {
      l++;
    } else if (v[l] + v[r] > M) {
      r--;
    } else {
      cnt++;
      r--;
      l--;
    }
  }

  cout << cnt;
  return 0;
}