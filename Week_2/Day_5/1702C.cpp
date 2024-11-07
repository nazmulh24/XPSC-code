/***********************************************************************

Name --> C. Train and Queries
Link --> https://codeforces.com/problemset/problem/1702/C

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
    int n, k;
    cin >> n >> k;

    map<int, set<int>> mpp;
    rep(i, 1, n + 1)
    {
        int x;
        cin >> x;

        mpp[x].insert(i);
    }

    // for (auto [x, y] : mpp)
    // {
    //     cout << x << " -> ";
    //     trav(i, y)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    rep(i, 0, k)
    {
        int l, r;
        cin >> l >> r;

        if (mpp.find(l) == mpp.end() || mpp.find(r) == mpp.end())
            no;
        else
        {
            int si, ei;

            si = *mpp[l].begin();
            ei = *mpp[r].rbegin();

            if (si < ei)
                yes;
            else
                no;
        }
    }
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
