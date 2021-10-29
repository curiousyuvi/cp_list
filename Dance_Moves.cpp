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
        ll x, y;
        cin >> x >> y;

        if (x == y)
        {
            cout << "0" << endl;
        }
        else
        {
            if (y > x)
            {
                if (abs(y - x) % 2 == 0)
                {
                    cout << abs(y - x) / 2 << endl;
                }
                else
                {
                    cout << (abs(y - x) / 2) + 2 << endl;
                }
            }
            else
            {
                cout << abs(y - x) << endl;
            }
        }
    }
    return 0;
}