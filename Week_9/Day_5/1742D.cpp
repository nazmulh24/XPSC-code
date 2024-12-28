/***********************************************************************

Name --> D. Coprime
Link --> https://codeforces.com/problemset/problem/1742/D

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

vector<int> pairs[1001];

void ggcd()
{
    forl(i, 1, 1001)
    {
        forl(j, 1, 1001)
        {
            if (__gcd(i, j) == 1)
                pairs[i].pb(j);
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a[1001];
    forl(i, 1, n + 1)
    {
        int x;
        cin >> x;
        a[x].pb(i);
    }

    int ans = -1;

    forl(i, 1, 1001)
    {
        trav(j, pairs[i])
        {
            if (!a[i].empty() && !a[j].empty())
            {
                ans = max(ans, a[i].back() + a[j].back());
            }
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ggcd();

    int ttttt = 1;
    cin >> ttttt; //--> Uncomment if multiple test cases

    while (ttttt--)
    {
        solve();
    }

    return 0;
}
