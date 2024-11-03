/***********************************************************************

Name --> B. Sereja and Suffixes
Link --> https://codeforces.com/problemset/problem/368/B

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
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)
#define UNIQUE(v) v.erase(unique(all(v)), v.end())
//********************************************************************

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(n + 1), cnt(n + 1);

    rep(i, 1, n + 1)
    {
        cin >> v[i];
    }

    set<int> s;

    for (int i = n; i >= 0; i--)
    {
        s.insert(v[i]);
        cnt[i] = s.size();
    }

    while (m--)
    {
        int l;
        cin >> l;

        cout << cnt[l] << endl;
    }
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
