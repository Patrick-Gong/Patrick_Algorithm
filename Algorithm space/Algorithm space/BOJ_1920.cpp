#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//bool binary_search(int arr[], int low, int high, int key) {
//	while (high >= low) {
//
//		int middle = low + (high - low) / 2;
//
//
//		if (arr[middle] == key) {
//			return true;
//		}
//		else if (arr[middle] > key) {
//			high = middle - 1;
//		}
//		else {
//			low = middle + 1;
//		}
//	}
//	return false;
//}

int main() {
	int N, M;

	cin >> N;
	vector<int> v1(N); 
	for (int i = 0; i < N; i++) {
		cin >> v1[i];
	}

	sort(v1.begin(), v1.end());

	cin >> M;
	vector<bool> v2(M, false); 

	int c;
	for (int k = 0; k < M; k++) {
		cin >> c;

		v2[k] = binary_search(v1.begin(), v1.end(),c);

	}

	for (int h = 0; h < M; h++) {
		cout << v2[h] << endl; 
	}

	return 0;
}
