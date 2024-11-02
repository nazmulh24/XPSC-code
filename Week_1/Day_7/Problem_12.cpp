/***********************************************************************

Name --> B. Symmetric Encoding
Link --> https://codeforces.com/contest/1974/problem/B

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

    string s, r;
    cin >> s;
    r = s;

    sort(r.begin(), r.end());
    r.erase(unique(r.begin(), r.end()), r.end());

    map<char, char> mpp;
    int x = r.size();

    rep(i, 0, (x / 2 + 1))
    {
        mpp[r[i]] = r[x - i - 1];
        mpp[r[x - i - 1]] = r[i];
    }

    rep(i, 0, n)
    {
        trav(a, mpp) if (s[i] == a.fi)
        {
            s[i] = a.se;
            break;
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
