#include <iostream>
#include <vector>
#include <numeric>
#include <string>

using namespace std;

string winner(int a, int b) {
  if (a > b) return "Limak";
  if (a < b) return "Radewoosh";

  return "Tie";
}

int main() {
  int n, c; cin >> n >> c;
  vector<int> points; vector<int> times;

  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    points.push_back(x);
  }

  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    times.push_back(x);
  }

  int limak = 0, radewoosh = 0;
  for (int i = 0; i < n; ++i) {
    int time_l = 0;
    for (int j = 0; j <= i; ++j)
      time_l += times[j];

    int time_r = 0;
    for (int j = 0; j <= i; ++j)
      time_r += times[n-j-1];

    limak += max(0, points[i]-c*time_l);
    radewoosh += max(0, points[n-i-1]-c*time_r);
  }

  cout << winner(limak, radewoosh) << '\n';
  return 0;
}
