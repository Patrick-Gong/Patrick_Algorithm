#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  // 수의 개수 N과 합을 구해야 하는 횟수 M 입력
  // for (N번) {
  // 구간 합의 대상 배열 입력 v[i]
  // 특정 인덱스까지의 합배열 구해놓기 S[i]
  // }
  //
  // for (M번) {
  // i와 j 입력
  // S[j] - S[i - 1] 을 출력
  // }
  //
  int N, M;
  int i, j;
  int S[100001];
  cin >> N >> M;

  for (int i = 1; i <= N; i++) {
    int temp;
    cin >> temp;
    S[i] = S[i - 1] + temp;
  }

  for (int k = 0; k < M; k++) {
    cin >> i >> j;
    cout << S[j] - S[i - 1] << "\n";
  }
  return 0;
}