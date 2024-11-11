/***********************************************************************

Name --> C - Dotify Playlist
Link --> https://vjudge.net/contest/671238#problem/C

Example-->


***********************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define pf push_front
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define forl(i, a, b) for (int i = (a); i < (b); ++i)
#define rfor(i, b, a) for (int i = (b); i >= (a); --i)
#define trav(a, x) for (auto &a : x)
#define UNIQUE(v) v.erase(unique(all(v)), v.end())
//********************************************************************

void solve()
{
    int n, k, l;
    cin >> n >> k >> l;

    vector<int> m;

    forl(i, 0, n)
    {
        int x, y;
        cin >> x >> y;

        if (l == y)
            m.pb(x);
    }

    if (m.size() < k)
    {
        cout << -1 << endl;
        return;
    }

    sort(rall(m));

    int ans = 0;

    forl(i, 0, k)
    {
        ans += m[i];
    }

    cout << ans << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t; // Uncomment if multiple test cases

    while (t--)
    {
        solve();
    }

    return 0;
}
