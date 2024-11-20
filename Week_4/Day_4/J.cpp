/***********************************************************************

Name --> J - Jumping on Tiles
Link --> https://vjudge.net/contest/672779#problem/J

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

void solve()
{
    string s;
    cin >> s;

    int n = sz(s);

    map<char, vector<int>> mpp;

    forl(i, 0, n)
    {
        mpp[s[i]].pb(i);
    }

    int d = (s[0] < s[n - 1]) ? 1 : -1;

    vector<int> ans;

    for (char c = s[0]; c != (s[n - 1] + d); c += d)
    {
        trav(a, mpp[c])
        {
            ans.pb(a);
        }
    }

    int cost = 0;

    forl(i, 1, sz(ans))
    {
        cost += abs(s[ans[i]] - s[ans[i - 1]]);
    }

    cout << cost << " " << sz(ans) << endl;

    trav(a, ans)
    {
        cout << a + 1 << " ";
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
