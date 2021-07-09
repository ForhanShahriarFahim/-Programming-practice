
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void SieveOfEratosthenes(ll n)
{
	bool prime[n+1];
	memset(prime, true, sizeof(prime));

	for (ll p=2; p*p<=n; p++)
	{
		// If prime[p] is not changed, then it is a prime
		if (prime[p] == true)
		{
			// Update all multiples of p greater than or
			// equal to the square of it
			// numbers which are multiple of p and are
			// less than p^2 are already been marked.
			for (ll i=p*p; i<=n; i += p)
				prime[i] = false;
		}
	}

	// Print all prime numbers
	for (ll p=2; p<=n; p++)
	if (prime[p])
		cout << p << " ";
}

// Driver Program to test above function
int main()
{
	ll n;
	cin>>n;
	SieveOfEratosthenes(n);
	return 0;
}

