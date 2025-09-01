#include <iostream>
#include <numeric>

using namespace std;

int main() {
  int n; cin >> n;
  int a[n] = { 0 };
  int x = 0;

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    a[i] += x;
    x = max(x, a[i]);
    cout << a[i] << " ";
  }
  cout << '\n';
  return 0;
}
