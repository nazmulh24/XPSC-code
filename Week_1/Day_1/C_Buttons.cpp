/***********************************************************************

Name --> C - Buttons
Link --> https://vjudge.net/contest/666748#problem/C

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
    int a, b;
    cin >> a >> b;

    int l = (a >= b) ? a : b;
    int s = (a <= b) ? a : b;

    int ans = 0;

    if (l == s)
    {
        ans = l + s;
        cout << ans << endl;
        return;
    }

    while (l >= s)
    {
        if (l == s)
        {
            break;
        }

        ans = ans + 2;
        l--;
    }
    ans += l + s - 1;

    cout << ans << endl;
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
