#include <iostream>
#include <vector>
using namespace std;

int GCD(int a, int b) {
    if (a%b == 0) { return b;}
    
    return GCD(b, a%b);
}

int main() {

    int t;
    
    vector<long long> result;
    cin >> t;


    for (int i=0; i<t; i++) {
        long long sum = 0;

        int n;
        cin >> n;
        vector<long long> input (n);

        for (int k=0; k<n;k++) {
            cin >> input[k];
        }

        for (int k=0; k<n-1; k++) {
            for (int j=k+1; j<n; j++) {
                sum += GCD(input[k], input[j]);
            }
        }
        result.push_back(sum);
    }

    for (int i=0;i<t;i++) {
        cout << result[i] << "\n";
    }
    return 0;
}