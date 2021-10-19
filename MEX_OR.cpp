#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

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

    return msb;
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
        ll n;
        cin >> n;
        if (n == 0)
        {
            cout << "1" << endl;
        }
        else if (n == 1)
        {
            cout << "2" << endl;
        }
        else if (areAllBitsSet(n))
        {
            cout << n + 1 << endl;
        }
        else
        {
            ll msb = getMsb(n);
            ll a = 0;
            ll b = 0;
            while (b < msb)
            {
                a += pow(2, b);
                b++;
            }
            cout << a + 1 << endl;
        }
    }
    return 0;
}