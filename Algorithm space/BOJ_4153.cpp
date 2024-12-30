#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    vector<string> arr;
    
    while (1) {
        cin >> a >> b >> c;

    if (a == 0 && b == 0 && c == 0) {
        break;
    }
    vector<int> vec = {a, b, c};
    sort(vec.begin(), vec.end());

        if (vec[0] * vec[0] + vec[1] * vec[1] == vec[2] * vec[2]) {
        cout << "right" << endl;
    }   
        else {
        cout << "wrong" << endl;
    }
    }

    return 0;
}