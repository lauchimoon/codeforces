#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> nums = {};

  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    nums.push_back(x);
  }

  int sereja = 0, dima = 0;
  int left = 0, right = n-1;
  for (int i = 0; i < n; ++i) {
    if (nums[left] > nums[right]) {
      if (i%2 == 0) sereja += nums[left];
      else dima += nums[left];
      ++left;
    } else {
      if (i%2 == 0) sereja += nums[right];
      else dima += nums[right];
      --right;
    }
  }

  cout << sereja << " " << dima << '\n';
  return 0;
}
