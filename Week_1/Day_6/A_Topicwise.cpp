/***********************************************************************

Name --> A - Topicwise
Link --> https://vjudge.net/contest/666751#problem/A

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
    int n, p1, p2, p3, t1, t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;

    int l[n], r[n];
    rep(i, 0, n)
    {
        cin >> l[i] >> r[i];
    }

    int tp = 0;

    rep(i, 0, n)
    {
        int li = l[i];
        int ri = r[i];

        tp += (ri - li) * p1;

        if (i < n - 1)
        {
            int idle = l[i + 1] - ri;

            if (idle <= t1)
            {
                tp += idle * p1;
            }
            else if (idle <= t1 + t2)
            {
                tp += (t1 * p1) + (idle - t1) * p2;
            }
            else
            {
                tp += (t1 * p1) + (t2 * p2) + (idle - t1 - t2) * p3;
            }
        }
    }

    cout << tp << endl;
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
