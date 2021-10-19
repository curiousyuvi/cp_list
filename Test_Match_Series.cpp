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
        ll r[5];
        ll in(0), en(0);
        for (ll i = 0; i < 5; i++)
        {
            cin >> r[i];
            // cout << r[i] << " ";
            if (r[i] == 1)
                in++;
            if (r[i] == 2)
                en++;
        }
        // cout << endl;

        // cout << in << " " << en << endl;

        if (in > en)
        {
            cout << "INDIA" << endl;
        }
        else if (en > in)
        {
            cout << "ENGLAND" << endl;
        }
        else
        {
            cout << "DRAW" << endl;
        }
    }
    return 0;
}