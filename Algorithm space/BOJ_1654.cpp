#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int K, N, tmp;
  int m = 1;
  int sum;
  int result = 0;

  cin >> K >> N;
  vector<int> input;
  for (int i = 0; i < K; i++) {
    cin >> tmp;
    input.push_back(tmp);
  }
  
  while (1) {
    for (int j = 0; j < K; j++) {
      sum = input[j] / m;
    }
    if (sum < N) {
      break;
    }
    result++;
    m++;
  }

  cout << tmp;

  return 0;
}