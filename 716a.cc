#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, c; cin >> n >> c;
  int words = 1;
  vector<int> seconds;

  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    seconds.push_back(x);
  }

  for (int i = 0; i < n-1; ++i) {
    if (seconds[i+1] - seconds[i] > c)
      words = 0;
    ++words;
  }

  cout << words << '\n';
  return 0;
}
