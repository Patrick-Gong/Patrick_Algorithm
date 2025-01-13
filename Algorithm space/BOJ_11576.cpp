#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int A, B;
  int m;
  int input, sum = 0;
  vector<int> v;

  cin >> A >> B;
  cin >> m;

  for (int i = 0; i < m; i++) {
    cin >> input;
    sum += input * pow(A, m - 1 - i);
  }

  while (sum >= B) {
    v.push_back(sum % B);
    sum /= B;
    if (sum < B) {
      v.push_back(sum);
    }
  }

  for (int i = v.size() - 1; i >= 0; i--) {
    cout << v[i] << " ";
  }
}