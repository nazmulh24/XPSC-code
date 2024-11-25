/***********************************************************************

Name --> B. Mainak and Interesting Sequence
Link --> https://codeforces.com/problemset/problem/1726/B

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
    int n, m;
    cin >> n >> m;

    if (n > m)
    {
        no;
        return;
    }

    vector<int> v;

    if (n % 2 == 0 && m % 2 == 0)
    {
        yes;

        forl(i, 0, n - 2)
            v.pb(1);

        int r = m - (n - 2);
        v.pb(r / 2);
        v.pb(r / 2);
    }
    else if (n % 2 == 1 && m % 2 == 0)
    {
        yes;

        forl(i, 0, n - 1)
            v.pb(1);

        int r = m - (n - 1);
        v.pb(r);
    }
    else if (n % 2 == 0 && m % 2 == 1)
    {
        no;
        return;
    }
    else if (n % 2 == 1 && m % 2 == 1)
    {
        yes;

        forl(i, 0, n - 1)
            v.pb(1);

        int r = m - (n - 1);
        v.pb(r);
    }

    trav(a, v) cout << a << " ";
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
