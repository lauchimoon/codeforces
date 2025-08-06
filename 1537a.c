// Arithmetic Array
#include <stdio.h>

int main() {
  int t; scanf("%d", &t);

  for (int i = 0; i < t; ++i) {
    int sum = 0;
    int n; scanf("%d", &n);
    for (int j = 0; j < n; ++j) {
      int x; scanf("%d", &x);
      sum += x;
    }

    if (sum < n) printf("1\n");
    else printf("%d\n", sum-n);
  }

  return 0;
}
