#include <iostream>
#include <numeric>
#include <string>

using namespace std;

string f(string x, string y) {
  string z = "";
  for (int i = 0; i < x.size(); ++i)
    z += min(x[i], y[i]);

  return z;
}

int main() {
  string x, y; cin >> x >> y;
  string z = "";

  for (int i = 0; i < x.size(); ++i)
    z += (x[i] != y[i])? min(x[i], y[i]) : ((x[i]+1 <= 'z')? x[i]+1 : 'z');

  cout << ((f(x, z) == y)? z : "-1") << '\n';
  return 0;
}
