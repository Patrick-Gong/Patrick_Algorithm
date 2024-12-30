#include <iostream>
using namespace std;

int main() {
	int a[9][9];
	int max = 0;
	int x, y;

	for (int k = 0; k < 9; k++) {
		for (int j = 0; j < 9; j++) {
			cin >> a[k][j];

			if (a[k][j] >= max) {
				max = a[k][j];
				x = k + 1;
				y = j + 1;
			}
			
		}
	}

	
	cout << max << endl;
	cout << x << " " << y;
	
	return 0;

}