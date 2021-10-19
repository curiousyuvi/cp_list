#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m, u, q;
    cin >> n >> m >> u >> q;

    ll arr[n + 2][m + 1] = {0};
    ll preArr[n + 2][m + 1] = {0};

    for (ll i = 0; i <= n + 1; i++)
    {
        for (ll j = 0; j <= m; j++)
        {
            arr[i][j] = 0;
            preArr[i][j] = 0;
        }
    }

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // cout << "arr :\n"
    //      << endl;
    // for (ll i = 1; i <= n; i++)
    // {
    //     for (ll j = 1; j <= m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // cout << "preArr :\n"
    //      << endl;
    // for (ll i = 1; i <= n; i++)
    // {
    //     for (ll j = 1; j <= m; j++)
    //     {
    //         cout << preArr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (ll j = 0; j < u; j++)
    {
        ll k, r1, c1, r2, c2;
        cin >> k >> r1 >> c1 >> r2 >> c2;
        r1++;
        r2++;
        c1++;
        c2++;
        for (ll i = r1; i <= r2; i++)
        {

            preArr[i][c1] += k;
            preArr[i][c2 + 1] -= k;
        }
        // cout << "preArr :\n"
        //      << endl;
        // for (ll i = 1; i <= n; i++)
        // {
        //     for (ll j = 1; j <= m; j++)
        //     {
        //         cout << preArr[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;
    }

    for (ll i = 1; i <= n; i++)
    {
        ll sum = 0;
        for (ll j = 1; j <= m; j++)
        {
            sum += preArr[i][j];
            preArr[i][j] = sum;
        }
    }

    // cout << "preArr :\n"
    //      << endl;
    // for (ll i = 1; i <= n; i++)
    // {
    //     for (ll j = 1; j <= m; j++)
    //     {
    //         cout << preArr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    for (ll i = 1; i <= n; i++)
    {

        for (ll j = 1; j <= m; j++)
        {
            arr[i][j] += preArr[i][j];
        }
    }

    // cout << "preArr :\n"
    //      << endl;
    for (ll i = 1; i <= n; i++)
    {

        for (ll j = 1; j <= m; j++)
        {

            arr[i][j] += arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
        }
    }

    for (ll j = 0; j < q; j++)
    {
        ll r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        r1++;
        r2++;
        c1++;
        c2++;

        ll ans = arr[r2][c2] - arr[r1 - 1][c2] - arr[r2][c1 - 1] + arr[r1 - 1][c1 - 1];

        cout << ans << endl;
    }

    return 0;
}