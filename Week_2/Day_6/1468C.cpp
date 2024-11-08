/***********************************************************************

Name --> C. Berpizza
Link --> https://codeforces.com/problemset/problem/1468/C

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
    int q;
    cin >> q;

    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;

    vector<int> ans;

    int c_no = 1;

    while (q--)
    {
        int x;
        cin >> x;

        if (x == 1)
        {
            int y;
            cin >> y;

            s.insert({c_no, y});
            ml.insert({y, -c_no});

            c_no++;
        }
        else if (x == 2)
        {
            int pos = s.begin()->fi;
            int money = s.begin()->se;

            ans.pb(pos);

            s.erase(s.begin());
            ml.erase({money, -pos});
        }
        else if (x == 3)
        {
            int pos = (-1) * ml.rbegin()->se;
            int money = ml.rbegin()->fi;

            ans.pb(pos);

            ml.erase(--ml.end());
            s.erase({pos, money});
        }
    }

    trav(a, ans)
    {
        cout << a << " ";
    }
    cout << endl;
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
