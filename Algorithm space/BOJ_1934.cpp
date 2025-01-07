#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    int a, b;
    int D;
    vector<int> v;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> a >> b;
        for (int k = 1; k <= min(a, b); k++) {
            if (a % k == 0 && b % k == 0) {
                D = k;
            }
        }
        v.push_back( a * b / D);
    }

    for (int j = 0; j < T; j++) {
        cout << v[j] << "\n";
    }
}