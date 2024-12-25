#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int N, M;
    vector<int> result;

    cin >> N;
    vector<int> v1(N);
    for (int i=0;i<N;i++) {
        cin >> v1[i];
    }
    sort(v1.begin(), v1.end());
    cin >> M;
    vector<int> v2(M);
    for (int k=0;k<M;k++) {
        cin >> v2[k];
        int min = lower_bound(v1.begin(), v1.end(), v2[k]) - v1.begin();
        int max = upper_bound(v1.begin(), v1.end(), v2[k]) - v1.begin();
        result.push_back(max - min);
    }

    for (int j=0;j<M;j++) {
        cout << result[j] << " ";
    }
    
    
    return 0;
}