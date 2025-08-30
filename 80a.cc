#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<bool> eratosthenes(unsigned int n);

// Check if m is the next prime number after n
bool is_next(vector<bool> primes, int m, int n) {
  int i;
  for (i = n+1; i < m; ++i)
    if (primes[i] && i < m)
      return false;

  return (primes[i] && i == m);
}

int main() {
  vector<bool> primes = eratosthenes(100);
  int n, m; cin >> n >> m;

  if (is_next(primes, m, n)) cout << "YES\n";
  else cout << "NO\n";
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
