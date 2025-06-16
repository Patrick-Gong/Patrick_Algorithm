#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, M;
  int arr[1025][1025]{0};
  cin >> N >> M;

  for (int x = 1; x <= N; x++) {
    for (int y = 1; y <= N; y++) {
      int temp;
      cin >> temp;
      arr[x][y] = arr[x][y - 1] + temp;
    }
  }

  for (int k = 0; k < M; k++) {
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int sum = 0;
    for (int i = x1; i <= x2; i++) {
      sum += arr[i][y2] - arr[i][y1 - 1];
    }
    cout << sum << "\n";
  }

  return 0;
}