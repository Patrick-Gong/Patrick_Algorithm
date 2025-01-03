#include <iostream>
using namespace std;

int main() {
    int n;
    int dp[1000001];
    cin >> n;

    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

// if문을 따로 지정하여 모든 조건을 탐색하게 하기

    for (int i = 4; i <= n; i++) {
        dp[i] = dp[i - 1] + 1;
        if (i%3 == 0) {
            dp[i] = min(dp[i/3] + 1, dp[i]);
        }
        if (i%2 == 0) {
            dp[i] = min(dp[i/2] + 1, dp[i]);
        }
    }

    cout << dp[n];
    return 0;

}