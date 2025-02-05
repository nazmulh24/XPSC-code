/***********************************************************************

Name --> E - Greg and Array
Link --> https://vjudge.net/contest/686164#problem/E
    https://codeforces.com/problemset/problem/296/C
Example-->

------------------------------------------------------------------------
Author --> Nazmul Hossain
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
#define forl(i, a, b) for (auto i = (a); i <= (b); ++i)
#define rfor(i, b, a) for (auto i = (b); i >= (a); --i)
#define trav(a, x) for (auto &a : x)
#define UNIQUE(v) v.erase(unique(all(v)), v.end())
//********************************************************************

const int N = 1e5 + 5;
int q[N];
int p[N];

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(N);

    forl(i, 1, n)
    {
        cin >> a[i];
    }

    vector<pair<int, int>> range(m + 1);
    vector<int> val(m + 1);

    forl(i, 1, m)
    {
        int l, r, x;
        cin >> l >> r >> x;
        range[i] = {l, r};
        val[i] = x;
    }

    forl(i, 1, k)
    {
        int x, y;
        cin >> x >> y;
        q[x]++;
        q[y + 1]--;
    }

    forl(i, 1, m)
        q[i] += q[i - 1];

    forl(i, 1, m)
        val[i] = val[i] * q[i];

    forl(i, 1, m)
    {
        int l = range[i].fi;
        int r = range[i].se;

        p[l] += (val[i]);
        p[r + 1] -= (val[i]);
    }

    forl(i, 1, n)
        p[i] += p[i - 1];
    forl(i, 1, n)
    {
        cout << p[i] + a[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ttttt = 1;
    // cin >> ttttt; //--> Uncomment if multiple test cases

    while (ttttt--)
    {
        solve();
    }

    return 0;
}
