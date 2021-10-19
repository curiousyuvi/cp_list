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
        ll n, c;
        cin >> n >> c;
        vector<ll> v;
        v.push_back(0);
        for (ll i = 0; i < n; i++)
        {
            ll input;
            cin >> input;
            v.push_back(input);
        }

        sort(v.begin(), v.end());
        // for (auto it = v.begin(); it != v.end(); it++)
        // {
        //     cout << *it << " ";
        // }
        // cout << endl;

        if (c == 2)
        {
            cout << v[n] - v[1] << endl;
        }
        else
        {
            ll low = v[1];
            ll high = v[n];
            ll gap = (low + high) / 2;
            ll best = 0;

            while (low <= high)
            {
                gap = (low + high) / 2;

                ll k = 1;
                ll left = v[1];
                ll i = 2;
                for (; i <= n && k < c; i++)
                {

                    if (v[i] >= (gap + left))
                    {
                        k++;
                        left = v[i];
                    }
                }

                if (k >= c)
                {
                    best = gap;
                    low = gap + 1;
                }
                else
                {
                    high = gap - 1;
                }
            }

            cout << best << endl;
        }
    }
    return 0;
}