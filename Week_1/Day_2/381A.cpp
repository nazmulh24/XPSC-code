/***********************************************************************

Name --> A. Sereja and Dima
Link --> https://codeforces.com/contest/381/problem/A

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
    int n;
    cin >> n;

    deque<int> v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }

    int s = 0, d = 0, m = 0;

    while (!v.empty())
    {
        int left = v.front(), right = v.back();
        int mx = max(left, right);

        if (m % 2 == 0)
            s += mx;
        else
            d += mx;

        if (mx == left)
            v.pop_front();
        else
            v.pop_back();

        m++;
    }

    cout << s << " " << d << endl;
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
