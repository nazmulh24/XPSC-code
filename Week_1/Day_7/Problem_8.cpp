/***********************************************************************

Name --> B. Radio Station
Link --> https://codeforces.com/contest/918/problem/B

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
    int n, m;
    cin >> n >> m;

    map<string, string> mpp;

    rep(i, 0, n)
    {
        string name, ip;
        cin >> name >> ip;

        mpp[ip] = name;
    }

    rep(i, 0, m)
    {
        string cmd, ip2;
        cin >> cmd >> ip2;

        ip2.pop_back();

        cout << cmd << " " << ip2 << "; #" << mpp[ip2] << endl;
    }
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
