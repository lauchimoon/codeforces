#include <iostream>

using namespace std;

int main() {
  int a,b,c,x,y,z;
  cin >> a >> b >> c >>
    x >> y >> z;

  int barley = a*x, hops = b*y, malt = c*z;
  if (barley >= hops && barley >= malt)
    cout << "Barley ";
  if (hops >= barley && hops >= malt)
    cout << "Hops ";
  if (malt >= barley && malt >= hops)
    cout << "Malt";

  cout << '\n';
  return 0;
}
