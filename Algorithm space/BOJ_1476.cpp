#include <iostream>
using namespace std;

int main() {
    int E, S, M;
    int a = 1, b = 1, c = 1;
    int count = 1;

    cin >> E >> S >> M;

    while (a != E || b != S || c != M) {
        if (1 <= a && a < 15) {
            a++;
        } else {
            a = 1;
        }
        if (1 <= b && b < 28) {
            b++;
        } else {
            b = 1;
        }
        if (1 <= c && c < 19) {
            c++;
        } else {
            c = 1;
        }
        count++;
    }

    cout << count;
}