#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using pii = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<pii> dur;

  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    dur.push_back({x, i+1});
  }

  sort(dur.begin(), dur.end(), [](pii a, pii b){ return a.first > b.first; });
  int x = 0;
  int shots = 0;
  for (int i = 0; i < n; ++i) {
    shots += (dur[i].first*x + 1);
    ++x;
  }

  cout << shots << '\n';
  for (auto p : dur)
    cout << p.second << " ";
  cout << '\n';

  return 0;
}
