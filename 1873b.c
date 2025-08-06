// Good Kid
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

int prod(int a[], int n) {
  int p = 1;
  for (int i = 0; i < n; ++i)
    p *= a[i];

  return p;
}

int main() {
  int t; scanf("%d", &t);

  while (t--) {
    int n; scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i)
      scanf("%d", &a[i]);

    qsort(a, n, sizeof(int), cmp);
    a[0] += 1;
    printf("%d\n", prod(a, n));
  }

  return 0;
}
