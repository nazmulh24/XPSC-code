/***********************************************************************

Name --> A - Bazoka and Mocha's Array
Link --> https://vjudge.net/contest/676796#problem/A

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

bool is_sort(vector<int> v)
{
    int n = sz(v);

    forl(i, 0, n - 1)
    {
        if (v[i] > v[i + 1])
            return false;
    }

    return true;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    trav(A, a) cin >> A;

    vector<int> x, y, ans;

    forl(i, 0, n)
    {
        x.pb(a[i]);

        if (a[i] > a[i + 1])
            break;
    }
    forl(i, sz(x), n)
    {
        y.pb(a[i]);
    }

    ans.insert(ans.end(), all(y));
    ans.insert(ans.end(), all(x));

    // trav(A, x) cout << A << " ";
    // cout << endl;
    // trav(A, y) cout << A << " ";
    // cout << endl;
    // trav(A, ans) cout << A << " ";
    // cout << endl;

    if (is_sort(ans))
        yes;
    else
        no;
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
