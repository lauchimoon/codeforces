// Next Round
#include <stdio.h>

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  int a[n];
  int next_round = 0;

  for (int i = 0; i < n; ++i)
    scanf("%d", &a[i]);

  for (int i = 0; i < n; ++i)
    next_round += (a[i] > 0 && a[i] >= a[k-1]);

  printf("%d\n", next_round);
  return 0;
}
