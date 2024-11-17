/***********************************************************************

Name --> C - Invert And Equalize
Link --> https://vjudge.net/contest/672779#problem/C

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
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt1 = 0, cnt0 = 0;

    bool a = false, b = false;

    forl(i, 0, n)
    {
        if (s[i] == '1')
        {
            if (!a)
                cnt1++;
            a = true;
            b = false;
        }
        if (s[i] == '0')
        {
            if (!b)
                cnt0++;
            b = true;
            a = false;
        }
    }

    int ans = min(cnt0, cnt1);

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
