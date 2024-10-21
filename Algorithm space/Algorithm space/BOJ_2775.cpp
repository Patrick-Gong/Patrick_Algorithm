#include <iostream>
#include <vector>
using namespace std;

int func(int k, int n) {
	int sum{0};

	if (k == 1) {
		return n*(n+1)/2;
	}
	else
	{
		for (int i = 0; i < n; i++) {
			sum += func(k - 1, i+1);
		}
		return sum;
	}
}

int main() {
	int floor, room;
	int T;
	

	cin >> T;
	vector<int> sum(T);
	for (int i = 0; i < T; i++) {
		cin >> floor >> room;
		sum[i] = func(floor, room);
	}

	for (int i = 0; i < T; i++) {
		cout << sum[i] << endl;
	}
}