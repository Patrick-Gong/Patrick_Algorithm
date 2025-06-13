#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base ::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  string S;

  cin >> N;
  cin >> S;
  int sum = 0;

  for (int i = 0; i < N; i++) {
    sum += S[i] - '0';
  }

  cout << sum;
  return 0;
}