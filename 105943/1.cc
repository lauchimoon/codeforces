#include <iostream>

using namespace std;

int min(int a, int b) { return (a<b)? a : b; }

int main() {
  int X,Y,Z,T,V;
  cin >> X >> Y >> Z >> T >> V;

  int op1 = X;
  int op2 = T*Y;
  int op3 = V*Z;
  cout << min(op1, min(op2, op3)) << '\n';

  return 0;
}
