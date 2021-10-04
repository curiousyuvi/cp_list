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
        ll n, H;
        cin >> n >> H;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll input;
            cin >> input;
            v.push_back(input);
        }

        sort(v.begin(), v.end());

        ll a = v[v.size() - 1];
        ll b = v[v.size() - 2];
        ll ans(0);

        if (H > a)
        {
            ll turns = 2 * (H / (a + b));
            ll rem = H % (a + b);
            if (rem > a)
            {
                turns += 2;
            }
            else if (rem != 0)
            {
                turns += 1;
            }
            ans = turns;
        }
        else
        {
            ans++;
        }

        cout << ans << endl;
    }
    return 0;
}