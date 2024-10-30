/***********************************************************************

Name --> A. Tom Riddle's Diary
Link --> https://codeforces.com/contest/855/problem/A

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

    map<string, bool> mp;
    vector<string> s(n);

    rep(i, 0, n)
    {
        cin >> s[i];
        mp[s[i]] = false;
    }

    rep(i, 0, n)
    {
        if (!mp[s[i]])
        {
            cout << "NO" << endl;
            mp[s[i]] = true;
        }
        else
            cout << "YES" << endl;

        // cout << s[i] << " -> " << mp[s[i]] << endl;
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
