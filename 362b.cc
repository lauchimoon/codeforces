#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<int> dirty(m);
  for (int i = 0; i < m; ++i)
    cin >> dirty[i];
  sort(dirty.begin(), dirty.end());

  if (m > 0) {
    if (dirty[0] == 1 || dirty[m-1] == n) {
      cout << "NO\n";
      return 0;
    }

    for (int i = 0; i < m-2; ++i)
      if (dirty[i+1] - dirty[i] == 1 && dirty[i+2] - dirty[i+1] == 1) {
        cout << "NO\n";
        return 0;
      }
  }

  cout << "YES\n";
  return 0;
}
