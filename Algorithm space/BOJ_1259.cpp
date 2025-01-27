#include <iostream>
#include <string>
using namespace std;

int main() {
  string input = "";
  string result;

  while (1) {
    result = "yes";
    cin >> input;

    if (input != "0") {
      for (int i = 0; i < input.length() / 2; i++) {
        if (input[i] != input[input.length() - 1 - i]) {
          result = "no";
          break;
        }
      }
      cout << result << "\n";
    } else {
      break;
    }
  }
  return 0;
}