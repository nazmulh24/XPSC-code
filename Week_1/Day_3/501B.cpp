/***********************************************************************

Name --> B. Misha and Changing Handles
Link --> https://codeforces.com/problemset/problem/501/B

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

    map<string, string> ans, has;

    rep(i, 0, n)
    {
        string old, neW;
        cin >> old >> neW;

        if (has.find(old) != has.end())
        {
            string s = has[old];
            ans[s] = neW;
            has.erase(old);
            has[neW] = s;
        }
        else
        {
            ans[old] = neW; //--> New Handle ki...
            has[neW] = old; //--> Kar new Handle...}
        }
    }

    cout << ans.size() << endl;
    trav(x, ans)
    {
        cout << x.fi << " " << x.se << endl;
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
