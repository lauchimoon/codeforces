#include <iostream>

using namespace std;

int main() {
  int N, M, S, P;
  cin >> N >> M >> S >> P;

  int x = N*(60*M + S) + P*(N-1);
  cout << x/60 << '\n' << x%60 << '\n';
  return 0;
}
