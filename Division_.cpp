#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;

        map<ll, ll> even, odd;

        if (!isPrime(n))
        {
            ll k = 2;
            while ((k * k) <= n)
            {
                if (n % k == 0)
                {
                    n /= k;
                    if (k & 1)
                    {
                        if (odd.find(k) == odd.end())
                        {
                            odd.insert({k, 1});
                        }
                        else
                        {
                            odd[k]++;
                        }
                    }
                    else
                    {
                        if (even.find(k) == even.end())
                        {
                            even.insert({k, 1});
                        }
                        else
                        {
                            even[k]++;
                        }
                    }
                }
                else
                {
                    k++;
                }
            }
        }
        else
        {
            if (n & 1)
            {
                odd.insert({n, 1});
            }
            else
            {
                even.insert({n, 1});
            }
        }

        ll ans(0);
        if (b > 0)
        {
            for (auto it = odd.begin(); it != odd.end(); it++)
            {
                // cout << it->first << " " << it->second << endl;
                ans += (it->second * b);
            }
        }
        else
        {
            ans += b;
        }

        if (a > 0)
        {
            for (auto it = even.begin(); it != even.end(); it++)
            {
                // cout << it->first << " " << it->second << endl;
                ans += (it->second * a);
            }
        }
        else
        {
            ans += a;
        }
        cout << ans << endl;
    }
    return 0;
}