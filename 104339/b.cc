#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int p1,p2,p3,p4;
  cin >> p1 >> p2 >> p3 >> p4;

  if (p1+p2 == p3+p4 || p1+p3 == p2+p4 || p1+p4 == p2+p3 ||
      p1+p2+p3 == p4 || p1+p2+p4 == p3 || p1+p3+p4 == p2 ||
      p2+p3+p4 == p1) cout << "YES";
  else cout << "NO";
  cout << '\n';
  return 0;
}
