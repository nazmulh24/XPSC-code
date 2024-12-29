/***********************************************************************

Name --> B - Apple Division
Link --> https://vjudge.net/contest/682611#problem/B

Example-->

------------------------------------------------------------------------
Author --> Nazmul Hossain
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

vector<int> a;
int ans = INT_MAX;

void findd(int i, int n, int s1, int s2)
{
    if (i == n)
    {
        ans = min(ans, abs(s1 - s2));
        return;
    }

    findd(i + 1, n, s1 + a[i], s2);

    findd(i + 1, n, s1, s2 + a[i]);
}

void solve()
{
    int n;
    cin >> n;

    forl(i, 0, n)
    {
        int x;
        cin >> x;

        a.pb(x);
    }

    findd(0, n, 0, 0);

    cout << ans << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ttttt = 1;
    // cin >> ttttt; //--> Uncomment if multiple test cases

    while (ttttt--)
    {
        solve();
    }

    return 0;
}
