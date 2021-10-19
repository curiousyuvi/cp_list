#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

ll getMsb(ll n)
{
    if (n == 0)
        return 0;

    ll msb = 0;
    n = n / 2;
    while (n != 0)
    {
        n = n / 2;
        msb++;
    }

    return (msb);
}

bool areAllBitsSet(int n)
{
    // all bits are not set
    if (n == 0)
        return false;

    // loop till n becomes '0'
    while (n > 0)
    {
        // if the last bit is not set
        if ((n & 1) == 0)
            return false;

        // right shift 'n' by 1
        n = n >> 1;
    }

    // all bits are set
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll c;
        cin >> c;

        if (areAllBitsSet(c))
        {
            cout << c << endl;
        }
        else
        {
            bitset<60> bSetC(c);
            ll k = getMsb(c);
            ll ans[k + 1] = {0};
            for (ll i = 0; i <= k; i++)
            {
                if (bSetC[i])
                {
                    if (k & 1)
                    {
                        ans[i] = k;
                    }
                    else
                    {
                        k--;
                        ans[i] = k;
                    }
                }
                else
                {
                    if (k & 1)
                    {
                        k--;
                        ans[i] = k;
                    }
                    else
                    {
                        ans[i] = k;
                    }
                }
            }

            ll len = bSetC[k] & 1 ? (k & 1 ? k : k - 1) : (k & 1 ? k - 1 : k);

            bitset<60> bSetAns[len] = {0};
            for (ll i = 0; i <= k; i++)
            {
                for (ll j = 0; j < len; j++)
                {
                    bSetAns[j][k - i] = 1;
                }
            }

            cout << len << endl;
            // for (ll i = 0; i < len; i++)
            // {
            //     cout << bSetAns[i] << " ";
            // }
            // cout << endl;
        }
    }
    return 0;
}