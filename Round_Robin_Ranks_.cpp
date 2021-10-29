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
        ll n, k;
        cin >> n >> k;

        if (k == 1)
        {
            cout << (n - 1) * 2 << endl;
        }
        else
        {
            cout << (n - (k / 2) - 1) * 2 << endl;
        }
    }
    return 0;
}