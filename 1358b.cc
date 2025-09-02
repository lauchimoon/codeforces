#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  vector<int> g = {1,5,4,5,1,9};
  int n = g.size();
  sort(g.begin(), g.end());

  int ngrannies = 1;
  for (int i = 0; i < n; ++i)
    if (g[i] <= ngrannies+1)
      ++ngrannies;

  cout << ngrannies << '\n';
  return 0;
}
