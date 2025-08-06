// I Wanna Be the Guy
#include <stdio.h>

int allone(int a[], int len) {
  for (int i = 1; i <= len; ++i)
    if (!a[i])
      return 0;

  return 1;
}

int main() {
  int n, p, q;
  scanf("%d", &n);
  int levels[n+1];
  for (int i = 0; i <= n; ++i)
    levels[i] = 0;

  scanf("%d", &p);
  int littleX[p+1];
  for (int i = 1; i <= p; ++i)
    scanf("%d", &littleX[i]);

  scanf("%d", &q);
  int littleY[q+1];
  for (int i = 1; i <= q; ++i)
    scanf("%d", &littleY[i]);

  if (p && q) {
    for (int i = 1; i <= p; ++i)
      for (int j = 1; j <= q; ++j)
        levels[littleX[i]] = levels[littleY[j]] = 1;
  } else if (!p && q) {
      for (int j = 1; j <= q; ++j)
        levels[littleY[j]] = 1;
  } else if (p && !q) {
      for (int i = 1; i <= p; ++i)
        levels[littleX[i]] = 1;
  }

  if (allone(levels, n))
    printf("I become the guy.\n");
  else
    printf("Oh, my keyboard!\n");

  return 0;
}
