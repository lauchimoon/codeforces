#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

double calcmean(vector<int> v) {
  double m = 0.0;
  for (int i : v)
    m += i;

  return m/v.size();
}

int main() {
  int n; cin >> n;
  vector<int> grades(n);

  for (int i = 0; i < n; ++i) cin >> grades[i];

  sort(grades.begin(), grades.end());
  double mean = calcmean(grades);
  int i = 0;

  while (lround(mean) < 5) {
    grades[i++] = 5;
    mean = calcmean(grades);
  }

  cout << i << '\n';
  return 0;
}
