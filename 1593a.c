// Elections
#include <stdio.h>

typedef long long int ll;

int max(int a, int b) { return (a>b)? a : b; }

int main() {
  int t; scanf("%d", &t);
  ll a, b, c;

  while (t--) {
    scanf("%lld %lld %lld", &a, &b, &c);
    ll win_a = (a > b && a > c)? 0 : max(b,c)+1 - a;
    ll win_b = (b > a && b > c)? 0 : max(a,c)+1 - b;
    ll win_c = (c > a && c > b)? 0 : max(a,b)+1 - c;

    printf("%lld %lld %lld\n", win_a, win_b, win_c);
  }
  return 0;
}
