#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll m, n;
    cin >> m >> n;

    ll matrixB[m + 1][n + 1] = {0};

    for (ll i = 1; i <= m; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            cin >> matrixB[i][j];
        }
    }

    set<pair<ll, ll>> setO;
    set<ll> setZR, setZC;

    for (ll i = 1; i <= m; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            if (matrixB[i][j] == 0)
            {
                setZR.insert(i);
                setZC.insert(j);
            }
            else
            {
                setO.insert({i, j});
            }
        }
    }

    // cout << " setZR: ";
    // for (auto kt = setZR.begin(); kt != setZR.end(); kt++)
    // {
    //     cout << *kt << " ";
    // }
    // cout << endl;

    // cout << " setZC: ";
    // for (auto kt = setZC.begin(); kt != setZC.end(); kt++)
    // {
    //     cout << *kt << " ";
    // }
    // cout << endl;

    // cout << " setO: ";
    // for (auto kt = setO.begin(); kt != setO.end(); kt++)
    // {
    //     cout << "{" << kt->first << " " << kt->second << "}"
    //          << " ";
    // }
    // cout << endl;

    auto it = setO.begin();
    for (; it != setO.end(); it++)
    {
        if (find(setZR.begin(), setZR.end(), it->first) != setZR.end() && find(setZC.begin(), setZC.end(), it->second) != setZC.end())
        {
            break;
        }
    }

    if (it != setO.end())
    {
        cout << "NO" << endl;
    }
    else
    {
        if (setO.size() != 0 && (setZR.size() == m || setZC.size() == n))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            ll matrixA[m + 1][n + 1];
            for (ll i = 1; i <= m; i++)
            {
                for (ll j = 1; j <= n; j++)
                {
                    matrixA[i][j] = 1;
                }
            }
            for (auto kt = setZR.begin(); kt != setZR.end(); kt++)
            {
                for (ll j = 1; j <= n; j++)
                {
                    matrixA[*kt][j] = 0;
                }
            }
            for (auto kt = setZC.begin(); kt != setZC.end(); kt++)
            {
                for (ll i = 1; i <= m; i++)
                {
                    matrixA[i][*kt] = 0;
                }
            }

            for (ll i = 1; i <= m; i++)
            {
                for (ll j = 1; j <= n; j++)
                {
                    cout << matrixA[i][j] << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}