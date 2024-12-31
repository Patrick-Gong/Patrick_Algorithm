#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int K, N;
  int result;

  cin >> K >> N;

  vector<int> input(K), tmp;
  for (int i = 0; i < K; i++) {
    cin >> input[i];
  }

  int maxI = *max_element(input.begin(), input.end());

  int left = 1;
  int right = maxI;
  int mid;
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
}