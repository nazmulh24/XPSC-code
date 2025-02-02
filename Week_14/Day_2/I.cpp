/***********************************************************************

Name --> I - String Reversal
Link --> https://vjudge.net/contest/686164#problem/I
    https://codeforces.com/problemset/problem/1430/E
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
#define forl(i, a, b) for (auto i = (a); i <= (b); ++i)
#define rfor(i, b, a) for (auto i = (b); i >= (a); --i)
#define trav(a, x) for (auto &a : x)
#define UNIQUE(v) v.erase(unique(all(v)), v.end())
//********************************************************************

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string r = s;
    reverse(all(r));

    map<char, vector<int>> pos_s, pos_r;

    forl(i, 0, n - 1)
    {
        pos_s[s[i]].pb(i);
        pos_r[r[i]].pb(i);
    }

    vector<int> permutation(n);

    forl(ch, 'a', 'z')
    {
        forl(i, 0, sz(pos_s[ch]) - 1)
        {
            permutation[pos_r[ch][i]] = pos_s[ch][i];
        }
    }

    pbds<int> p;
    int ans = 0;

    rfor(i, n - 1, 0)
    {
        ans += p.order_of_key(permutation[i]);
        p.insert(permutation[i]);
    }

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
