#include <iostream>
using namespace std;

int main() {
    int x, y;
    string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    cin >> x >> y;
    int sum = 0;

    for (int i = 1; i < x; i++) {
        if (i == 2) {
            sum += 28;
        } else if (i == 4 || i == 6 || i == 9 || i == 11) {
            sum += 30;
        } else {    
            sum += 31;
        }
    }
    sum += y;
    cout << day[sum % 7];

    return 0;
}