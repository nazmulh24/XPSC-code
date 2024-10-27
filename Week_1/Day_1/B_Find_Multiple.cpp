/***********************************************************************

Name --> B - Find Multiple
Link --> https://vjudge.net/contest/666748#problem/B

Example-->
Inputcopy	Outputcopy
123 456 100

Outputcopy
200
300 or 400 would also be accepted.


Inputcopy	Outputcopy
630 940 314

Outputcopy
-1

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
    int a, b, c;
    cin >> a >> b >> c;

    int i = 1;
    int ans = -1;

    if (a == c || b == c)
    {
        cout << c << endl;
        return;
    }

    while (c * i < b)
    {
        if (c * i >= a)
        {
            ans = c * i;
            break;
        }
        i++;
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
