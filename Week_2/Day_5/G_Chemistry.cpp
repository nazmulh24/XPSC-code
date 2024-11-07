/***********************************************************************

Name --> G - Chemistry
Link --> https://vjudge.net/contest/669017#problem/G

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
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)
#define UNIQUE(v) v.erase(unique(all(v)), v.end())
//********************************************************************

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    unordered_map<char, int> freq;

    trav(c, s)
    {
        freq[c]++;
    }

    int odd_cnt = 0;

    trav(a, freq)
    {
        // cout << a.fi << " -> " << a.se << endl;

        if (a.se % 2 == 1)
            odd_cnt++;
    }

    int r_o_c = odd_cnt - k;

    // cout << r_o_c << endl;

    if (r_o_c > 1)
        no;
    else
        yes;
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
