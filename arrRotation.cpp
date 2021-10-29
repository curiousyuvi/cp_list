#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

vector<ll> rotateArr(ll n, ll r, vector<ll> v)
{

    vector<ll> newV;

    for (ll i = i + r; i <= n - 1; i++)
    {
        newV.push_back(v[i]);
    }

    for (ll i = 0; i <= r; i++)
    {
        newV.push_back(v[i]);
    }

    return newV;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, r;
    cin >> n >> r;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll in;
        cin >> in;
        v.push_back(in);
    }

    vector<ll> ansV = rotateArr(n, r, v);

    for (auto it = ansV.begin(); it != ansV.begin(); ans)

        return 0;
}