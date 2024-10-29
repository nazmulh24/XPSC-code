/***********************************************************************

Name --> E - Even Sum Subarray
Link --> https://vjudge.net/contest/667724#problem/E

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

    vector<int> a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }

    int cnt = 0;
    map<int, int> mp;
    mp[0] = -1;
    int sm = 0;

    rep(i, 0, n)
    {
        sm += a[i];

        if (sm % 2 == 0)
            cnt = max(cnt, i + 1);
        else
        {
            if (mp.count(1) > 0)
            {
                cnt = max(cnt, i - mp[1]);
            }
        }

        if (sm % 2 == 0)
        {
            if (mp.count(0) == 0)
            {
                mp[0] = i;
            }
        }
        else
        {
            if (mp.count(1) == 0)
            {
                mp[1] = i;
            }
        }
    }

    cout << cnt << endl;
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
