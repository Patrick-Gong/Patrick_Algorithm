#include <iostream>
using namespace std;

int main() {
    int a, b;
    int D, M;
    cin >> a >> b;

    for (int i = 1; i <= max(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            D = i;
        }
    }

    M = a * b / D;

    cout << D << "\n" << M;
}