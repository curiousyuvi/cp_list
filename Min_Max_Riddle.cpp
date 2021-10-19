#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    vector<ll> v;
    v.push_back(0);
    for (ll i = 1; i <= n; i++)
    {
        ll input;
        cin >> input;
        v.push_back(input);
    }

    ll nleLeft[n + 1], nleRight[n + 1], minInDist[n + 1];

    for (ll i = 0; i <= n; i++)
    {
        nleLeft[i] = -1;
        nleRight[i] = n + 1;
        minInDist[i] = 1;
    }

    stack<ll> s;

    for (ll i = 1; i <= n; i++)
    {
        while (!s.empty() && v[s.top()] >= v[i])
            s.pop();

        if (!s.empty())
            nleLeft[i] = s.top();

        s.push(i);
    }

    stack<ll> u;
    for (ll i = n; i >= 1; i--)
    {
        while (!u.empty() && v[u.top()] >= v[i])
            u.pop();

        if (!u.empty())
            nleRight[i] = u.top();

        u.push(i);
    }

    for (ll i = 1; i <= n; i++)
    {
        if (nleLeft[i] == -1 || nleRight[i] == n + 1)
            continue;
        minInDist[i] = nleRight[i] - nleLeft[i] - 1;
    }

    for (ll i = 1; i <= n; i++)
    {
        cout << "left : " << nleLeft[i] << " right : " << nleRight[i] << " dist : " << minInDist[i] << endl;
    }

    vector<ll> maxs;
    for (ll k = 1; k <= n; k++)
    {
        vector<ll> mins;

        for (ll i = 1; i <= n - k + 1; i++)
        {
            if (minInDist[i] <= k)
            {
                mins.push_back(v[i]);
            }
            else
            {
                mins.push_back(min(v[i], *min_element((v.begin() + i + minInDist[i]), (v.begin() + i + k))));
            }
        }
        maxs.push_back(*max_element(mins.begin(), mins.end()));
    }

    for (auto it = maxs.begin(); it != maxs.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}