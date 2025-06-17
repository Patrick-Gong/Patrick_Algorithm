#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int N, M;
  long S[1000001]{0};

  long cnt = 0;

  cin >> N >> M;
  vector<long> v(M, 0);
  for (int i = 1; i <= N; i++) {
    int temp;
    cin >> temp;
    S[i] = S[i - 1] + temp;
  }

  for (int i = 1; i <= N; i++) {
    int remainder = S[i] % M;
    if (remainder == 0) {
      cnt++;
    }
    v[remainder]++;
  }

  for (int i = 0; i < M; i++) {
    if (v[i] > 1) {
      cnt += v[i] * (v[i] - 1) / 2;
    }
  }

  cout << cnt;

  return 0;
}