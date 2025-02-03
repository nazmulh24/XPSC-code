/***********************************************************************

Name --> D - Karen and Coffee
Link --> https://vjudge.net/contest/686164#problem/D
    https://codeforces.com/problemset/problem/816/B
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
#define forl(i, a, b) for (auto i = (a); i <= (b); ++i)
#define rfor(i, b, a) for (auto i = (b); i >= (a); --i)
#define trav(a, x) for (auto &a : x)
#define UNIQUE(v) v.erase(unique(all(v)), v.end())
//********************************************************************

const int N = 2e5;
int a[N], b[N];

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;

    while (n--)
    {
        int l, r;
        cin >> l >> r;

        a[l]++;
        a[r + 1]--;
    }

    forl(i, 1, N)
    {
        a[i] = a[i] + a[i - 1];
    }

    forl(i, 1, N)
    {
        if (a[i] >= k)
            b[i] = 1;
        else
            b[i] = 0;
    }

    forl(i, 1, N)
    {
        b[i] = b[i] + b[i - 1];
    }

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        cout << b[y] - b[x - 1] << endl;
    }
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
