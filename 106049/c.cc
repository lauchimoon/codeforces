#include <numeric>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool inrange(int x, int a, int b) {
  return x >= a && x <= b;
}

vector<bool> eratosthenes(unsigned int n);

bool check_primality(unsigned int n, vector<bool> primes) {
  for (int i = 0; i < n && i < primes.size(); ++i)
    if (primes[i] && n%i == 0)
      return false;

  return true;
}

int main() {
  // 31623 ~= sqrt(10e9)
  vector<bool> primes = eratosthenes(31623);
  int t;
  cin >> t;

  while (t--) {
    int n, l, r;
    cin >> n >> l >> r;

    if (n > l && check_primality(n, primes)) {
      cout << n << '\n';
      continue;
    }

    int x = l;
    while (x <= r && !inrange(gcd(n,x), l, r))
      ++x;

    cout << ((x > r)? -1 : x) << '\n';
  }

  return 0;
}

vector<bool> eratosthenes(unsigned int n) {
  vector<bool> primes(n+1);
  for (unsigned int i = 0; i < n+1; ++i)
    primes[i] = true;

  primes[0] = primes[1] = false;
  unsigned int top = sqrt(n);

  for (unsigned int i = 2; i <= top; ++i)
    if (primes[i])
      for (unsigned int j = i*i; j <= n; j += i)
        primes[j] = false;

  return primes;   
}
