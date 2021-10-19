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

        string s;
        cin >> s;

        ll c = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            // cout << (s[i] - '0') + 1 << endl;

            for (ll j = i + 1; j < n; j++)
            {
                if (abs((s[i] - '0') - (s[j] - '0')) == abs(i - j))
                {
                    c++;
                }
            }
        }

        cout << c << endl;
    }
    return 0;
}