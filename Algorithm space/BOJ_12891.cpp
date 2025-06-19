#include <iostream>
#include <string>

using namespace std;

int arr[4]{0};
int min_arr[4]{0};
void Remove(char c);
void add(char c);
int check(int arr[], int min_arr[]);

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int S, P;

  int cnt = 0;
  cin >> S >> P;

  string DNA;
  cin >> DNA;

  for (int i = 0; i < 4; i++) {
    cin >> min_arr[i];
  }
  int l = 0, r = l + P - 1;

  for (int i = l; i <= r; i++) {
    if (DNA[i] == 'A') {
      arr[0]++;
    } else if (DNA[i] == 'C') {
      arr[1]++;
    } else if (DNA[i] == 'G') {
      arr[2]++;
    } else {
      arr[3]++;
    }
  }
  if (check(arr, min_arr) == 4) {
    cnt++;
  };
  l++;
  r++;

  while (r < S) {
    Remove(DNA[l - 1]);
    add(DNA[r]);

    if (check(arr, min_arr) == 4) {
      cnt++;
    };
    l++;
    r++;
  }

  cout << cnt;

  return 0;
}

void Remove(char c) {
  if (c == 'A') {
    arr[0]--;
  } else if (c == 'C') {
    arr[1]--;
  } else if (c == 'G') {
    arr[2]--;
  } else {
    arr[3]--;
  }
}
void add(char c) {
  if (c == 'A') {
    arr[0]++;
  } else if (c == 'C') {
    arr[1]++;
  } else if (c == 'G') {
    arr[2]++;
  } else {
    arr[3]++;
  }
}

int check(int arr[], int min_arr[]) {
  int k = 0;
  for (int i = 0; i < 4; i++) {
    if (arr[i] >= min_arr[i]) {
      k++;
    }
  }
  return k;
}