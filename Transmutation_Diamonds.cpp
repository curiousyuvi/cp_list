#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll arr[n + 1][n + 1];
        for (ll i = 0; i <= n; i++)
        {
            for (ll j = 0; j <= n; j++)
            {
                if (i == 0 || j == 0)
                {
                    arr[i][j] = 0;
                }
                else
                {
                    cin >> arr[i][j];
                }
            }
        }

        for (ll i = 0; i <= n; i++)
        {
            ll copy = i;
            ll sum = 0;
            for (ll j = 0; j <= n; j++)
            {
                arr[copy][j] += sum;
                sum = arr[copy][j];
                copy--;
            }
        }

        ll ans = LONG_LONG_MIN;

        ll k = 1;
        while (k <= n)
        {
            for (ll i = 0; i < n; i++)
            {
                if ((k + i - 1) > n)
                    continue;
                for (ll j = 0; j < n; j++)
                {
                    if ((k + j - 1) > n)
                        continue;

                    ll calPow = 0;
                    ll copy = k;
                    ll a = i + (k / 2);
                    ll b = j + (k / 2);
                    ll copyI = i;
                    ll copyJ = j;
                    bool phase = true;

                    while (copy--)
                    {
                        calPow += (arr[copyI][b] - arr[a - 1][copyJ - 1]);
                        if (phase)
                        {
                            copyJ++;
                            copyI++;
                        }
                        else
                        {
                            a++;
                            b++;
                        }
                    }

                    ans = max(calPow, ans);
                }
            }
            k++;
        }

        cout << ans << endl;
    }
    return 0;
}