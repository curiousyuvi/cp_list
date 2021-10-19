#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, q;
    cin >> n >> q;
    ll arr[n + 2] = {0};
    ll idxArr[n + 2] = {0};

    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        arr[l] += (1 - l);
        idxArr[l] += 1;

        arr[r + 1] -= (1 - l);
        idxArr[r + 1] -= 1;
    }

    ll sum1 = 0;
    ll sum2 = 0;

    for (ll i = 1; i <= n; i++)
    {
        sum1 += arr[i];
        sum2 += idxArr[i];
        arr[i] = sum1;
        idxArr[i] = sum2;
    }

    ll m;
    cin >> m;
    while (m--)
    {
        ll k;
        cin >> k;
        cout << k * idxArr[k] + arr[k] << endl;
    }

    return 0;
}