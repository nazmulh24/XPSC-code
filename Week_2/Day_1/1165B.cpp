/***********************************************************************

Name --> B. Polycarp Training
Link --> https://codeforces.com/problemset/problem/1165/B

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

    multiset<int> s;
    rep(i, 0, n)
    {
        int x;
        cin >> x;

        s.insert(x);
    }

    int ans = 0, problem = 1;

    while (!s.empty())
    {
        auto LB = s.lower_bound(problem);

        if (LB != s.end())
        {
            ans++;
            s.erase(LB);
        }
        else
        {
            break;
        }

        problem++;
    }

    cout << ans << endl;
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
