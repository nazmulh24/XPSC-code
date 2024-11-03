/***********************************************************************

Name --> Set
Link -->

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
    vector<int> v = {1, 3, 5, 7, 2, 7, 3, 9, 0, 3};

    // trav(a, v)
    // {
    //     cout << a << " ";
    // }
    // cout << endl;

    set<int> s;

    rep(i, 0, v.size())
    {
        s.insert(v[i]);
    }

    trav(a, s)
    {
        cout << a << " ";
    }
    cout << endl;

    auto it = s.upper_bound(10);
    if (it == s.end())
        cout << "END" << endl;
    else
        cout << *it << endl;
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
