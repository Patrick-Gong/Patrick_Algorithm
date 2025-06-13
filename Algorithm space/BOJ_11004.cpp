#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int N, k;
vector<int> V;

void quick_sort(vector<int>& v, int l, int r, int k);
int partition(vector<int>& v, int l, int r);
void swap(vector<int>& v, int l, int r);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  cin >> N >> k;

  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;
    V.push_back(x);
  }

  quick_sort(V, 0, N - 1, k - 1);

  cout << V[k - 1];
  return 0;
}

void quick_sort(vector<int>& v, int l, int r, int k) {
  int pivot = partition(v, l, r);
  if (pivot == k) {
    return;
  } else if (k < pivot) {
    quick_sort(v, l, pivot - 1, k);
  } else {
    quick_sort(v, pivot + 1, r, k);
  }
}

int partition(vector<int>& v, int l, int r) {
  if (r - l == 1) {
    if (v[l] > v[r]) swap(v, l, r);
    return r;
  }
  int mid = (l + r) / 2;
  swap(v, l, mid);
  int pivot = v[l];
  int i = l + 1;
  int j = r;

  while (i <= j) {
    while (pivot < v[j] && j > 0) j--;
    while (pivot > v[i] && i < v.size() - 1) i++;
    if (i <= j) swap(v, i++, j--);
  }
  v[l] = v[j];
  v[j] = pivot;
  return j;
}

void swap(vector<int>& v, int l, int r) {
  int temp = v[l];
  v[l] = v[r];
  v[r] = temp;
};