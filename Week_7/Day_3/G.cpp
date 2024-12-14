/***********************************************************************

Name --> B. Dreamoon and WiFi
Link --> https://codeforces.com/problemset/problem/476/B

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

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    int ps1 = 0, ps2 = 0, us2 = 0;

    forl(i, 0, sz(s1))
    {
        if (s1[i] == '+')
            ps1++;
        if (s2[i] == '+')
            ps2++;
        if (s2[i] == '?')
            us2++;
    }

    // cout << ps1 << " " << ps2 << " " << us2 << endl;

    int cnt = 0;

    forl(i, 0, (1 << us2))
    {
        // cout << bitset<4>(i) << endl;
        // cout << __builtin_popcount(i) << " + " << ps2 << " -> " << ps1 << endl << endl;

        if (__builtin_popcount(i) + ps2 == ps1)
            cnt++;
    }

    cout << fixed << setprecision(12) << cnt * 1.0 / (1 << us2) << endl;
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
