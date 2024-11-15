/***********************************************************************

Name --> C. Ski Resort
Link --> https://codeforces.com/problemset/problem/1840/C

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
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> v(n);

    forl(i, 0, n)
    {
        cin >> v[i];
    }

    int ans = 0;
    int seg = 0;

    forl(i, 0, n)
    {
        if (v[i] <= q)
        {
            seg++;

            if (i == n - 1 || v[i + 1] > q)
            {
                if (seg >= k)
                {
                    int x = seg - k + 1;
                    int add = x * (x + 1) / 2;

                    ans += add;
                }
                seg = 0;
            }
        }
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
