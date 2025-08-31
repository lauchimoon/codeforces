#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v = { 0, 0, 0 };
  cin >> v[0] >> v[1] >> v[2];

  sort(v.begin(), v.end());

  cout << abs(v[1] - v[0]) + abs(v[1] - v[2]) << '\n';
  return 0;
}
