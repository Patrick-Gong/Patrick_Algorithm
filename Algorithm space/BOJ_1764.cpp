#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

bool comp(string a, string b) { return a < b; }

int main() {
  int N, M;
  map<string, int> nameMap;
  vector<string> outputs;
  string name;
  int result = 0;

  cin >> N >> M;

  for (int i = 0; i < N; i++) {
    cin >> name;
    nameMap.insert({name, 1});
  }

  for (int i = 0; i < M; i++) {
    cin >> name;
    if (nameMap.find(name) != nameMap.end()) {
      result++;
      outputs.push_back(name);
    }
  }
  sort(outputs.begin(), outputs.end(), comp);

  cout << result << "\n";
  for (int i = 0; i < result; i++) {
    cout << outputs[i] << "\n";
  }
  return 0;
}