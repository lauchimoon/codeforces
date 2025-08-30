#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n,k,l,c,d,p,nl,np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int ml = k*l;
  int toasts = ml/nl;
  int limes = c*d;
  int salt = p/np;

  cout << min(toasts, min(limes, salt))/n << '\n';
  return 0;
}
