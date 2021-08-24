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

        string s = to_string(n);

        if (n % 21 != 0 && s.find("21") == string::npos)
        {
            cout << "The streak lives still in our heart!" << endl;
        }
        else
        {
            cout << "The streak is broken!" << endl;
        }
    }
    return 0;
}