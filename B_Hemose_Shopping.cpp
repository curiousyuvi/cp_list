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
        ll n, x;
        cin >> n >> x;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll input;
            cin >> input;
            v.push_back(input);
        }

        if (!is_sorted(v.begin(), v.end()))
        {
            if (v.size() <= x)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}