/***********************************************************************

Name --> C. Paint the Array
Link --> https://codeforces.com/problemset/problem/1618/C

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
#define forl(i, a, b) for (int i = (a); i < (b); ++i)
#define rfor(i, b, a) for (int i = (b); i >= (a); --i)
#define trav(a, x) for (auto &a : x)
#define UNIQUE(v) v.erase(unique(all(v)), v.end())
//********************************************************************

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    trav(A, a) cin >> A;

    int g1 = 0, g2 = 0;

    for (int i = 0; i < n; i += 2)
    {
        g1 = __gcd(g1, a[i]);

        // cout << g1 << " ";
    }

    for (int i = 1; i < n; i += 2)
    {
        g2 = __gcd(g2, a[i]);

        // cout << g2 << " ";
    }

    int ans = 0;
    bool ok = true;

    for (int i = 1; i < n; i += 2)
    {
        if (a[i] % g1 == 0)
            ok = false;
    }

    if (ok)
        ans = g1;
    else
    {
        ok = true;

        for (int i = 0; i < n; i += 2)
        {
            if (a[i] % g2 == 0)
                ok = false;
        }

        if (ok)
            ans = g2;
    }

    cout << ans << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ttttt = 1;
    cin >> ttttt; //--> Uncomment if multiple test cases

    while (ttttt--)
    {
        solve();
    }

    return 0;
}
