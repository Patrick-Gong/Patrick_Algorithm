#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M;

  int max = 0;

  cin >> N >> M;
  vector<int> vec(N);

  for (int i = 0; i < N; i++) {
    cin >> vec[i];
  }

  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      for (int k = j + 1; k < N; k++) {
        int tmp = vec[i] + vec[j] + vec[k];
        if (tmp > max && tmp <= M) {
          max = tmp;
        }
      }
    }
  }

  cout << max;
}