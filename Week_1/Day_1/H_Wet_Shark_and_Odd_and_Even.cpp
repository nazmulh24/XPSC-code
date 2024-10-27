/***********************************************************************

Name --> H - Wet Shark and Odd and Even
Link --> https://vjudge.net/contest/666748#problem/H

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

    vector<int> v(n);
    int sum = 0;
    rep(i, 0, n)
    {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end());

    int min_odd;

    rep(i, 0, n)
    {
        if (v[i] % 2 != 0)
        {
            min_odd = v[i];
            break;
        }
    }

    if (sum % 2 == 0)
        cout << sum << endl;
    else
        cout << sum - min_odd << endl;
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
