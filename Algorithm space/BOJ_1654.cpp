#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  unsigned int K, N;
  unsigned int result = 0;

  cin >> K >> N;
  unsigned int maxi = 0;
  vector<unsigned int> input(K);
  for (int i = 0; i < K; i++) {
    cin >> input[i];
    maxi = max(maxi, input[i]);
  }

  unsigned int left = 1, right = maxi, mid;

  while (left <= right) {
    mid = (left + right) / 2;

    int sum = 0;

    for (int j = 0; j < K; j++) {
      sum += input[j] / mid;
    }

    if (sum < N) {
      right = mid - 1;
    } else {
      left = mid + 1;
      result = max(result, mid);
    }
  }

  cout << result;

  return 0;
}