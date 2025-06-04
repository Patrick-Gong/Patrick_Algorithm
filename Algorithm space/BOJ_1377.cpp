#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int N;
int ans = -1;

int main() {
  cin >> N;
  vector<pair<int, int>> A(N);
  for (int k = 0; k < N; k++) {
    cin >> A[k].first;
    A[k].second = k;
  }

  sort(A.begin(), A.end());

  for (int i = 0; i < N; i++) {
    ans = max(A[i].second - i, ans);
  }

  cout << ans + 1;

  return 0;
}
