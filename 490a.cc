// Team Olympiad
#include <iostream>
#include <queue>
#include <limits.h>

typedef unsigned long int ul;

using namespace std;

int main() {
  int n, k;
  queue<int> program, math, pe;

  cin >> n;
  for (int i = 1; i <= n; ++i) {
    cin >> k;
    if (k == 1)
      program.push(i);
    if (k == 2)
      math.push(i);
    if (k == 3)
      pe.push(i);
  }

  ul min = INT_MAX;
  if (min > program.size()) min = program.size();
  if (min > math.size()) min = math.size();
  if (min > pe.size()) min = pe.size();

  cout << min << '\n';
  for (ul i = 0; i < min; ++i) {
    cout << program.front() << " " << math.front() << " " << pe.front() << '\n';
    program.pop(); math.pop(); pe.pop();
  }

  return 0;
}
