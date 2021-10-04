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
        int a, b;
        cin >> a >> b;
        pos[i] = a;
        range[i] = b;
    }
    // cout << n << " " << p << endl;

    // for (ll i = 0; i < n; i++)
    //     cout << pos[i] << " ";
    // cout << endl;

    // for (ll i = 0; i < n; i++)
    //     cout << range[i] << " ";
    // cout << endl;

    ll path[p + 1] = {0};
    // for (ll i = 0; i <= p; i++)
    //     cout << path[i] << " ";
    // cout << endl;

    for (ll i = 0; i < n; i++)
    {
        for (ll j = pos[i]; j <= min(p, (pos[i] + range[i])); j++)
        {
            if (path[j] == 0)
            {
                path[j] = 1;
            }
            else if (path[j] == 1)
            {
                path[j] = -1;
            }
        }
        for (ll j = (pos[i] >= 1) ? (pos[i] - 1) : -1; j >= max((ll)0, (pos[i] - range[i])); j--)
        {
            if (path[j] == 0)
            {
                path[j] = 1;
            }
            else if (path[j] == 1)
            {
                path[j] = -1;
            }
        }
    }

    // for (ll i = 0; i <= p; i++)
    // cout << path[i] << " ";
    // cout << endl;

    ll ans = LONG_LONG_MIN;
    ll c = 0;
    if (path[0] != 1)
    {
        c = 1;
    }
    for (ll i = 1; i <= p; i++)
    {
        if (path[i - 1] != 1 && path[i] != 1)
        {
            c++;
        }
        else if (path[i] != 1)
        {
            ans = max(ans, c);
            c = 1;
        }
        else
        {
            ans = max(ans, c);
            c = 0;
        }

        if (i == p)
        {
            ans = max(ans, c);
        }
    }

    cout << ans << endl;

    return 0;
}