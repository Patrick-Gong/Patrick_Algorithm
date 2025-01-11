#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int N;
int M;
vector<string> vec;

bool check(string n) {
  for (int i = 0; i < n.size(); i++) {
    for (int k = 0; k < M; k++) {
      if (n[i] == vec[k][0]) {
        // N - 1과 N + 1의 유효성 검사 실시
        return false;
      }
    }
  }
  return true;
}

int main() {
  cin >> N;
  cin >> M;

  for (int i = 0; i < M; i++) {
    int input;
    cin >> input;
    vec.push_back(to_string(input));
  }

  // +1, -1 버튼만 눌러서 100에서 목표채널로 가는 경우
  int cnt = abs(N - 100);

  for (int i = 0; i < 1000000; i++) {
    int tmp = 0;
    if (check(to_string(i))) {
      tmp = to_string(i).size() + abs(N - i);
      cnt = min(cnt, tmp);
    }
  }

  cout << cnt;

  return 0;
}