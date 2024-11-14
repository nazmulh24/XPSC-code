/***********************************************************************

Name --> D. Black and White Stripe
Link --> https://codeforces.com/problemset/problem/1690/D

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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int mn = INT_MAX;
    int b = 0, w = 0;
    int l = 0, r = 0;

    while (r < n)
    {
        if (s[r] == 'W')
            w++;
        if (s[r] == 'B')
            b++;

        if (r - l + 1 == k)
        {
            mn = min(mn, w);

            if (s[l] == 'W')
                w--;
            if (s[l] == 'B')
                b--;

            l++;
            r++;
        }
        else
            r++;
    }

    cout << mn << endl;
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
