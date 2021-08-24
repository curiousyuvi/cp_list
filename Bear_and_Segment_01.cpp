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
        string s;
        cin >> s;

        ll a = s.find('1');

        ll b = s.rfind('1');

        if (a < 0 && b < 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (s.substr(a, b - a + 1).find('0') == string::npos)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        // cout << s.substr(a, b - a + 1);
    }
    return 0;
}