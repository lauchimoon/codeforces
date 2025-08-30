#include <iostream>

using namespace std;

typedef unsigned long long int ull;

ull sumdiag(ull **a, int n) {
  ull s = 0;
  for (int i = 0; i < n; ++i)
    s += a[i][i];

  return s;
}

ull sum2nddiag(ull **a, int n) {
  ull s = 0;
  int mid = (n-1)/2;

  for (int i = n-1; i >= 0; --i) {
    if (i != mid)
      s += a[(n-1) - i][i];
  }

  return s;
}

ull sumrow(ull **a, int n) {
  ull s = 0;
  for (int i = 0; i < n; ++i)
    if (i != (n-1)/2)
      s += a[(n-1)/2][i];

  return s;
}

ull sumcol(ull **a, int n) {
  ull s = 0;
  for (int i = 0; i < n; ++i)
    if (i != (n-1)/2)
      s += a[i][(n-1)/2];

  return s;
}

int main() {
  int n; cin >> n;
  ull **a = (ull **)malloc(n*sizeof(ull *));
  for (int i = 0; i < n; ++i) {
    a[i] = (ull *)malloc(n*sizeof(ull));
    for (int j = 0; j < n; ++j)
      cin >> a[i][j];
  }

  cout << sumdiag(a, n) + sum2nddiag(a, n) +
          sumrow(a, n) + sumcol(a, n) << '\n';

  for (int i = 0; i < n; ++i)
    free(a[i]);
  free(a);

  return 0;
}
