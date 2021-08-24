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
    bool flag = false;
    for (ll i = 0; i < n; i++)
    {
        ll input;
        cin >> input;
        v.push_back(input);
        if (v[i] >= 0)
            flag = true;
    }

    if (flag)
    {
        ll c = 0;
        ll ssum = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] >= 0)
            {
                c++;
                ssum += v[i];
            }
        }

        cout << ssum << " " << c;
    }
    else
    {
        cout << *max_element(v.begin(), v.end());
    }

    return 0;
}