#include <deque>
#include <iostream>
#include <utility>
using namespace std;
typedef pair<int, int> Node;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, L;
  deque<Node> dq;
  cin >> N >> L;

  for (int i = 1; i <= N; i++) {
    int now;
    cin >> now;

    while (dq.size() && dq.back().second > now) {
      dq.pop_back();
    }
    dq.push_back({i, now});

    if (i - dq.front().first >= L) {
      dq.pop_front();
    }

    cout << dq.front().second << ' ';
  }

  return 0;
}