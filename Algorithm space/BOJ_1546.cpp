#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  // 시험을 본 과목의 개수 N 입력
  // for (N번) {
  // 각 과목의 점수 입력
  // 최대값과 입력된 값 중 비교하여 최대값 저장
  // }
  //
  // 원래 평균: sum / N
  // 새로운 평균: sum / M * 100 / N
  int N, k;
  int M = 0, sum = 0;

  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> k;
    sum += k;
    M = max(M, k);
  }

  double result = sum * 100.0 / M / N;

  cout << result;
  return 0;
}