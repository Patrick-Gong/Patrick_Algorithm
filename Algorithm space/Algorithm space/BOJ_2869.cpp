#include <iostream>
using namespace std;

int main() {
	int A, B, V;
	int temp{ 0 }, day{0};


	cin >> A >> B >> V;

	if ((V - A) % (A - B) == 0) day = (V - A) / (A - B) + 1;
	else day = (V - A) / (A - B) + 2;

	cout << day;
	return 0;
}