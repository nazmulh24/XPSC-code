/***********************************************************************

Name --> H - Sliding Window Median
Link --> https://vjudge.net/contest/686164#problem/H
    https://www.cses.fi/problemset/task/1076
Example-->

------------------------------------------------------------------------
Author --> Nazmul Hossain
***********************************************************************/

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
#define forl(i, a, b) for (int i = (a); i <= (b); ++i)
#define rfor(i, b, a) for (int i = (b); i >= (a); --i)
#define trav(a, x) for (auto &a : x)
#define UNIQUE(v) v.erase(unique(all(v)), v.end())
//********************************************************************

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    trav(A, a) cin >> A;

    pbds<pair<int, int>> p;
    int l = 0, r = 0;
    while (r < n)
    {
        p.insert({a[r], r});

        if (r - l + 1 == k)
        {
            int pos = k / 2;
            if (k % 2 == 0)
                pos--;

            auto it = p.find_by_order(pos);

            cout << it->fi << " ";

            p.erase({a[l], l});
            l++;
        }
        r++;
    }

    cout << endl;
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
