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
        ll x, k;
        cin >> x >> k;

        ll minLCM = x * 2;
        ll maxLCM = (x * k) * ((x * k) - 1);

        cout << minLCM << " " << maxLCM << endl;
    }
    return 0;
}