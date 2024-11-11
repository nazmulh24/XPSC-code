/***********************************************************************

Name --> B - Yoga Class
Link --> https://vjudge.net/contest/671238#problem/B

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
    int n, x, y;
    cin >> n >> x >> y;

    int cnt1 = 0, cnt2 = 0, ans;

    if (n % 2 == 0)
    {
        cnt1 = n * x;
        cnt2 = n * y / 2;

        ans = max(cnt1, cnt2);
    }
    else
    {
        cnt1 = n * x;
        cnt2 = y * (n / 2) + x;

        ans = max(cnt1, cnt2);
    }

    cout << ans << endl;
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
