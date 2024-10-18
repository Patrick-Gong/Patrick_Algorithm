#include <iostream>
using namespace std;

int main() {
	int N, i;
	int sum{ 0 };

	cin >> N;

	for (int k = 0; k < N; k++) {
		cin >> i;
		sum += i;
	}

	cout << sum - (N - 1);

	return 0;
}