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
        vector<ll> v, s;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            ll input;
            cin >> input;
            v.push_back(input);
            if (input != -1)
            {
                sum += input;
            }
            s.push_back(sum);
        }

        ll laterSum = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] == -1)
            {
                v[i] = round((double)(s[i - 1] + laterSum)) / ((double)((i != 0) ? i : 1));
                laterSum += v[i];
            }
        }

        for (ll i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}