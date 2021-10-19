#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second < b.second);
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
        ll n;
        cin >> n;

        vector<pair<ll, ll>> v;

        for (ll i = 0; i < n; i++)
        {
            ll in;
            cin >> in;

            v.push_back({in, i});
        }

        sort(v.begin(), v.end());

        ll rem = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i].first > rem)
            {
                v[i].first = rem;
                rem++;
            }
        }

        sort(v.begin(), v.end(), sortbysec);

        for (ll i = 0; i < n; i++)
        {
            cout << v[i].first << " ";
        }
        cout << endl;
    }
    return 0;
}