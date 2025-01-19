#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  vector<int> sizes(6);
  int T, P;
  int T_min = 0, P_max = 0, P_num = 0;

  cin >> N;
  for (int i = 0; i < 6; i++) {
    cin >> sizes[i];
  }
  cin >> T >> P;

  for (int i = 0; i < 6; i++) {
    if (sizes[i] % T != 0) {
      T_min += (sizes[i] / T) + 1;
    } else {
      T_min += sizes[i] / T;
    }
  }

  P_max = N / P;
  P_num = N % P;

  cout << T_min << "\n";
  cout << P_max << " " << P_num;
  return 0;
}