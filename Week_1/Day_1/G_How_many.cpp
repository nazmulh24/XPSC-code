/***********************************************************************

Name --> G - How many?
Link --> https://vjudge.net/contest/666748#problem/G

Example-->


***********************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long
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
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)
#define UNIQUE(v) v.erase(unique(all(v)), v.end())
//********************************************************************

void solve()
{
    int s, t;
    cin >> s >> t;

    int cnt = 0;

    rep(i, 0, 101)
    {
        rep(j, 0, 101)
        {
            rep(k, 0, 101)
            {
                if ((i + j + k) <= s && (i * j * k) <= t)
                    cnt++;
            }
        }
    }

    cout << cnt << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t; // Uncomment if multiple test cases

    while (t--)
    {
        solve();
    }

    return 0;
}
