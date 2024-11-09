/***********************************************************************

Name --> B. Berland Music
Link --> https://codeforces.com/problemset/problem/1622/B

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
    int n;
    cin >> n;

    map<int, int> mpp;

    vector<int> p(n), q(n), one, zero;

    rep(i, 0, n)
    {
        cin >> p[i];
        q[i] = p[i];

        mpp[p[i]] = i;
    }

    string s;
    cin >> s;

    rep(i, 0, s.size())
    {
        if (s[i] == '0')
            zero.pb(p[i]);
        if (s[i] == '1')
            one.pb(p[i]);
    }

    sort(rall(p));

    sort(rall(one));
    sort(rall(zero));

    int k = 0;

    rep(i, 0, one.size())
    {
        q[mpp[one[i]]] = p[k];
        k++;
    }

    rep(i, 0, zero.size())
    {
        q[mpp[zero[i]]] = p[k];
        k++;
    }

    trav(a, q)
    {
        cout << a << " ";
    }
    cout << endl;
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
