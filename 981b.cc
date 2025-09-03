#include <iostream>
#include <map>
#include <numeric>

using namespace std;

long long int mymax(long long int a, long long int b) {
  return (a > b)? a : b;
}

int main() {
  map<int, long long int> incomes;

  int n; cin >> n;
  for (int i = 0; i < n; ++i) {
    int a, x; cin >> a >> x;
    incomes[a] = x;
  }

  int m; cin >> m;
  for (int i = 0; i < m; ++i) {
    int b, y; cin >> b >> y;
    incomes[b] = mymax(incomes[b], y);
  }

  long long int ans = 0;
  for (auto [k, v] : incomes)
    ans += v;

  cout << ans << '\n';
  return 0;
}
