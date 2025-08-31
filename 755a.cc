#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<bool> eratosthenes(unsigned int n);

int main() {
  int n; cin >> n;
  vector<bool> primes = eratosthenes(10e5);

  for (int m = 1; m <= 1000; ++m)
    if (!primes[n*m+1]) {
      cout << m << '\n';
      break;
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
