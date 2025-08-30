#include <iostream>
#include <set>

using namespace std;

int main() {
  int n; cin >> n;

  set<int> t;
  for (int i = 1; i <= 32; ++i)
    t.insert(i*(i+1)/2);

  cout << ((t.find(n) != t.end())? "YES" : "NO") << '\n';
  return 0;
}
