#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> years = {};
  for (int i = 0; i < n-1; ++i) {
    int x; cin >> x;
    years.push_back(x);
  }

  int a, b; cin >> a >> b;

  int total = 0;
  for (int i = a-1; a != b; ++i) {
    ++a;
    total += years[i];
  }

  cout << total << '\n';
  return 0;
}
