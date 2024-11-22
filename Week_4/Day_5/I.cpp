/***********************************************************************

Name --> I - Assembly via Minimums
Link --> https://vjudge.net/contest/672779#problem/I

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
    int n;
    cin >> n;

    int s = n * (n - 1) / 2;

    vector<int> b(s);
    forl(i, 0, s)
    {
        cin >> b[i];
    }

    sort(all(b));

    vector<int> a;
    int j = 0;

    forl(i, 0, n - 1)
    {
        a.pb(b[j]);
        j += n - 1 - i;
    }

    a.pb(b.back());

    trav(x, a)
    {
        cout << x << " ";
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
