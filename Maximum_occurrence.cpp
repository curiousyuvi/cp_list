#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

    map<char, ll> hm;

    for (ll i = 0; i < s.size(); i++)
    {

        auto it = hm.find(s[i]);
        if (it != hm.end())
            it->second++;
        else
        {
            hm.insert({s[i], 1});
        }
    }

    pair<char, ll> maxOccur = {' ', LONG_LONG_MIN};
    for (auto it = hm.begin(); it != hm.end(); it++)
    {
        if (it->second > maxOccur.second)
        {
            maxOccur.first = it->first;
            maxOccur.second = it->second;
        }
    }

    cout << maxOccur.first << " " << maxOccur.second << endl;

    return 0;
}