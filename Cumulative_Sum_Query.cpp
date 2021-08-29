#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
ll const N = 1e5;
ll a[N], s[N];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        s[i] = sum;
    }

    ll q;
    cin >> q;
    for (ll i = 0; i < q; i++)
    {
        ll g, h;
        cin >> g >> h;

        cout << (s[h] - ((g >= 1) ? s[g - 1] : 0)) << endl;
    }

    return 0;
}