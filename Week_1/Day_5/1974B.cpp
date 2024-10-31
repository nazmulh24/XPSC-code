/***********************************************************************

Name --> B. Symmetric Encoding
Link --> https://codeforces.com/contest/1974/problem/B

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

    string s, r;
    cin >> s;

    r = s;

    sort(r.begin(), r.end());
    r.erase(unique(r.begin(), r.end()), r.end());

    // trav(a, r)
    // {
    //     cout << a << " ";
    // }
    // cout << endl;

    int x = r.size();
    map<char, char> mP;

    for (int i = 0; i < x; i++)
    {
        mP[r[i]] = r[x - 1 - i];
        mP[r[x - 1 - i]] = r[i];

        if (i > x / 2)
            break;
    }

    // trav(a, mP)
    // {
    //     cout << a.fi << " " << a.se << endl;
    // }
    // cout << endl;

    rep(i, 0, n)
    {
        trav(a, mP)
        {
            if (s[i] == a.fi)
            {
                s[i] = a.se;
                break;
            }
        }
    }

    cout << s << endl;
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
