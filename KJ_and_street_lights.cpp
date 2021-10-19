#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, p;
    cin >> n >> p;

    ll pos[n], range[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> pos[i] >> range[i];
    }
    // cout << n << " " << p << endl;

    // for (ll i = 0; i < n; i++)
    //     cout << pos[i] << " ";
    // cout << endl;

    // for (ll i = 0; i < n; i++)
    //     cout << range[i] << " ";
    // cout << endl;

    ll path[p + 2] = {0};
    // for (ll i = 0; i <= p; i++)
    //     cout << path[i] << " ";
    // cout << endl;

    for (ll i = 0; i < n; i++)
    {
        ll x = min(pos[i] + range[i], p) - max((ll)0, pos[i] - range[i]);
        if (x == 0)
        {
            path[max((ll)0, pos[i] - range[i])] += 1;
            path[max((ll)0, pos[i] - range[i]) + 1] -= 1;
        }
        else
        {
            path[max((ll)0, pos[i] - range[i])] += 1;
            path[min(pos[i] + range[i] + 1, p + 1)] -= 1;
        }
    }

    ll sum = 0;

    for (ll i = 0; i <= p; i++)
    {
        sum += path[i];
        path[i] = sum;
        // cout << path[i] << " ";
    }
    // cout << endl;

    ll ans = 0;
    ll c = 0;
    for (ll i = 0; i <= p; i++)
    {
        if (path[i] != 1)
        {
            c++;
        }
        else
        {
            ans = max(c, ans);
            c = 0;
        }

        if (i == p)
        {
            ans = max(c, ans);
        }
        // cout << c << " " << ans << endl;
    }

    cout << ans << endl;

    return 0;
}