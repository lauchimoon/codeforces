// Increasing
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

int problem(void) {
  int n; scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; ++i)
    scanf("%d", &a[i]);

  qsort(a, n, sizeof(int), cmp);
  for (int i = 0; i < n - 1; ++i)
    if (a[i] == a[i + 1])
      return 0;

  return 1;
}

int main() {
  int t; scanf("%d", &t);

  while (t--) {
    int r = problem();
    if (r) printf("YES\n");
    else printf("NO\n");
  }

  return 0;
}
