#include <iostream>
#include <vector>
using namespace std;
int result;
int arr[9];
int N;
int visited[9];
vector<int> v;

void DFS() {
  if (v.size() == N) {
    int tmp;
    for (int k = 0; k < N; k++) {
      tmp += abs(arr[k + 1] - arr[k]);
    }
    result = max(result, tmp);
    return;
  }
  for (int i = 0; i < N; i++) {
    if (!visited[i]) {
        }
  }
}

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }
  DFS();
  cout << result;
}