#include <iostream>
using namespace std;

int main() {
	int A[10], B[10];
	int score_A {0}, score_B{ 0 };
	char winner{'\0'}, temp_winner{'\0'};

	for (int i = 0; i < 10; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < 10; i++) {
		cin >> B[i];
	}

	for (int i = 0; i < 10; i++) {
		if (A[i] > B[i]) { score_A += 3; temp_winner = 'A'; }
		else if (A[i] == B[i]) { score_A += 1; score_B += 1; }
		else { score_B += 3; temp_winner = 'B';}

	}
	
	if (score_A > score_B) {
		winner = 'A';
	}
	else if (score_A < score_B) {
		winner = 'B';
	}
	else {
		if (temp_winner == 'A' || temp_winner == 'B') { winner = temp_winner; }
		else { winner = 'D'; }
	}

	cout << score_A << ' ' << score_B << endl;
	cout << winner;

	return 0;
}