#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<string, ll> users;
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        auto it = users.find(s);
        if (it != users.end())
        {
            it->second++;
            cout << s << it->second << endl;
        }
        else
        {
            users.insert({s, 0});
            cout << "OK" << endl;
        }
    }
    return 0;
}