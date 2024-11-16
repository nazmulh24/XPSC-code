/***********************************************************************

Name --> E - EVacuate to Moon
Link --> https://vjudge.net/contest/670883#problem/E

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
    int n, m, h;
    cin >> n >> m >> h;

    vector<int> a(n), b(m);

    forl(i, 0, n)
    {
        cin >> a[i];
    }
    forl(i, 0, m)
    {
        cin >> b[i];
    }

    sort(rall(a));
    sort(rall(b));

    int l = 0, r = 0, ans = 0;

    while (r < m && l < n)
    {
        int x = b[r] * h;

        if (x <= a[l])
            ans += x;
        else
            ans += a[l];

        r++;
        l++;
    }

    cout << ans << endl
         << endl;
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
