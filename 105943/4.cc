#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> distances;

  for (int i = 0; i < n; ++i) {
    int a_i; cin >> a_i;
    distances.push_back(a_i);
  }

  int K = 0;
  sort(distances.begin(), distances.end(), [](int a, int b){ return a>b; });

  for (int i = 0; i < n; ++i) {
    if (distances[i] >= i+1) ++K;
    else break;
  }

  cout << K << '\n';
  return 0;
}
