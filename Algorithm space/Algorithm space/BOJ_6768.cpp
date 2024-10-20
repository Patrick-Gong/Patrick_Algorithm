#include <iostream>
using namespace std;

int main() {
	
	int i, output;
	cin >> i;

	output = (i - 1) * (i - 2) * (i - 3) / 6;
	
	cout << output;
	return 0;
}