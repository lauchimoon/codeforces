#include <iostream>
#include <vector>

using namespace std;
using Point = pair<int, int>;

Point find_missing(Point A, Point B, Point C) {
  Point AB = {B.first - A.first, B.second - A.second};
  Point AC = {C.first - A.first, C.second - A.second};
  if ((AB.first*AC.first + AB.second*AC.second) == 0)
    return {B.first + C.first - A.first, B.second + C.second - A.second};

  Point BA = {A.first - B.first, A.second - B.second};
  Point BC = {C.first - B.first, C.second - B.second};
  if ((BA.first*BC.first + BA.second*BC.second) == 0)
    return {A.first + C.first - B.first, A.second + C.second - B.second};

  Point CA = {A.first - C.first, A.second - C.second};
  Point CB = {B.first - C.first, B.second - C.second};
  if ((CA.first*CB.first + CA.second*CB.second) == 0)
    return {A.first + B.first - C.first, A.second + B.second - C.second};

  return {0, 0};
}

int main() {
  Point points[3] = {};
  int n, m; cin >> n >> m;
  int p = 0;

  for (int i = 0; i < n; ++i) {
    string row; cin >> row;
    for (int j = 0; j < m; ++j) {
      if (row[j] == '*')
        points[p++] = {j+1, i+1};
    }
  }

  Point D = find_missing(points[0], points[1], points[2]);
  cout << D.second << " " << D.first << '\n';
  return 0;
}
