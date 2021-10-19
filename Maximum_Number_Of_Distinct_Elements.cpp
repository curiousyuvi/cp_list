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
        vector<ll> b;
        b.push_back(0);
        for (ll i = 0; i < n; i++)
        {
            ll input;
            cin >> input;
            b.push_back(input);
        }

        map<ll, vector<ll>> m;
        for (ll i = 0; i <= n; i++)
        {
            vector<ll> v;
            m.insert({i, v});
        }

        ll a[n + 1] = {-1};

        for (ll i = 1; i <= n; i++)
        {

            pair<ll, ll> leastUsed = {-1, LONG_LONG_MAX};

            ll j = b[i] - 1;
            for (; j >= 0; j--)
            {

                if (leastUsed.second > m[j].size())
                {
                    leastUsed = {j, m[j].size()};
                }
                if (m[j].size() == 0)
                {
                    m[j].push_back(i);
                    break;
                }
            }

            if (j == -1)
            {
                m[leastUsed.first].push_back(i);
            }
        }

        for (auto it = m.begin(); it != m.end(); it++)
        {
            // cout << it->second.size() << " ";

            for (ll i = 0; i < it->second.size(); i++)
            {
                a[it->second[i]] = it->first;
            }
        }

        for (ll i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}