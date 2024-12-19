/***********************************************************************

Name --> K - Bazoka and Mocha's Array
Link --> https://vjudge.net/contest/679642#problem/K

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

bool ok(vector<int> a)
{
    forl(i, 0, sz(a) - 1)
    {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), x, y;
    trav(A, a) cin >> A;

    if (ok(a))
    {
        yes;
        return;
    }

    bool flag = true;

    forl(i, 0, n - 1)
    {
        if (flag)
            x.pb(a[i]);
        else
            y.pb(a[i]);

        if (a[i] > a[i + 1])
            flag = false;
    }

    y.pb(a[n - 1]);
    y.insert(y.end(), all(x));

    // trav(A, y) cout << A << " ";
    // cout << endl;

    if (ok(y))
        yes;
    else
        no;
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
