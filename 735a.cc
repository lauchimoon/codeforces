#include <iostream>
#include <numeric>

using namespace std;

int main() {
  int n, k; cin >> n >> k;
  string s; cin >> s;

  int gidx = s.find('G');
  int tidx = s.find('T');

  int sign = (gidx>tidx)? -1 : 1;
  bool no_obstacles = true;
  for (int i = gidx; (sign > 0)? (i < tidx) : (i > tidx); i += sign*k)
    if (s[i] == '#') {
      no_obstacles = false;
      break;
    }

  if (abs(gidx - tidx)%k == 0 && no_obstacles) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
