/***********************************************************************

Name --> C. Registration system
Link --> https://codeforces.com/contest/4/problem/C

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
    int n;
    cin >> n;

    map<string, int> mpp;

    char c = '1';

    rep(i, 0, n)
    {
        string s;
        cin >> s;

        if (mpp[s] == 0)
        {
            cout << "OK" << endl;
            mpp[s] = 1;
        }
        else
        {
            cout << s << mpp[s] << endl;
            mpp[s]++;
        }
    }

    // trav(a, mpp)
    // {
    //     cout << a.fi << " -> " << a.se << endl;
    // }
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
