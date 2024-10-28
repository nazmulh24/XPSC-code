/***********************************************************************

Name --> C. Word Game
Link --> https://codeforces.com/problemset/problem/1722/C

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

    map<string, vector<int>> mp;

    rep(i, 0, 3)
    {
        rep(j, 0, n)
        {
            string s;
            cin >> s;

            mp[s].pb(i);
        }
    }

    // trav(x, mp)
    // {
    //     string a = x.fi;
    //     vector<int> b = x.se;

    //     cout << a << " -> ";

    //     trav(y, b)
    //     {
    //         cout << y << " ";
    //     }
    //     cout << endl;
    // }

    vector<int> ans(3);

    trav(x, mp)
    {
        vector<int> b = x.se;

        if (b.size() == 1)
            ans[b[0]] += 3;

        if (b.size() == 2)
        {
            ans[b[0]] += 1;
            ans[b[1]] += 1;
        }
    }

    trav(u, ans)
    {
        cout << u << " ";
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
