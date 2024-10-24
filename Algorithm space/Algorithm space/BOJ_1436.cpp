#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	int temp {0};
	int result { 665 };


	cin >> N;

	while (temp < N) {
		string s = to_string(result);

		for (int i = 0; i < s.length() - 2; i++) {
			if (s[i] == '6' && s[i + 1] == '6' && s[i + 2] == '6') {
				temp += 1;
				break;
			}
		}
		
		result++;
	}

	cout << result - 1;
	return 0;
}