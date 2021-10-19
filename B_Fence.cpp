#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    v.push_back(0);
    for (ll i = 0; i < n; i++)
    {
        ll input;
        cin >> input;
        v.push_back(input);
    }

    pair<ll, ll> ans = {0, 1};
    for (ll i = 1; i <= k; i++)
    {
        ans.first += v[i];
    }
    ll sAns = ans.first;

    for (ll i = 2; i <= n - k + 1; i++)
    {
        sAns -= v[i - 1];
        sAns += v[i + k - 1];

        if (ans.first > sAns)
        {
            ans = {sAns, i};
        }
    }

    cout << ans.second << endl;

    return 0;
}