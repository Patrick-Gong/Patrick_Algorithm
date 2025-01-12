#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  int input;
  vector<int> dp(12);
  cin >> T;

  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 4;

  for (int k = 4; k <= 11; k++) {
    dp[k] = dp[k - 1] + dp[k - 2] + dp[k - 3];
  }

  for (int i = 0; i < T; i++) {
    cin >> input;
    cout << dp[input] << "\n";
  }
}