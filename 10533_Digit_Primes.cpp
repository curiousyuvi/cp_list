#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define max 1000002
ll primes[max];
ll digitPrimes[max];

void sieve()
{
    vector<char> is_prime(max, true);
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i * i <= max; i++)
    {
        if (is_prime[i])
        {
            primes[i] = 1;
            // cout << i << " ";
            for (int j = i * i; j < max; j += i)
                is_prime[j] = false;
        }
        // cout << primes[i] << " " << i
        //      << " ";
    }
    for (ll i = 1000; i < max; i++)
    {
        if (is_prime[i])
        {
            primes[i] = 1;
        }
    }
}

ll digitSum(ll n)
{

    ll sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

void preCompute()
{
    sieve();
    ll sum = 0;
    for (ll i = 0; i < max; i++)
    {

        if (primes[i])
        {
            if (primes[digitSum(i)])
                sum += 1;
        }
        digitPrimes[i] = sum;
        // cout << digitPrimes[i] << " ";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    preCompute();
    ll t;
    cin >> t;
    while (t--)
    {
        ll t1, t2;
        cin >> t1 >> t2;
        // cout << t1 << " " << t2;
        // cout << digitPrimes[t1 - 1] << " " << digitPrimes[t2] << endl;
        cout << (digitPrimes[t2] - digitPrimes[t1 - 1]) << endl;
    }
    return 0;
}