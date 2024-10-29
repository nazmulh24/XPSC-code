/***********************************************************************

Name --> F - Binary Conversion
Link --> https://vjudge.net/contest/667724#problem/F

Example-->


***********************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long
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

    string s, t;
    cin >> s >> t;

    reverse(s.begin(), s.end());

    for (int j = 0; j < k; ++j)
    {
        int carry = 1;

        for (int i = 0; i < n; ++i)
        {
            if (carry == 0)
                break;

            if (s[i] == '0')
            {
                s[i] = '1';
                carry = 0;
            }
            else
            {
                s[i] = '0';
                carry = 1;
            }
        }

        if (carry == 1)
            s.pb('1');
    }

    reverse(s.begin(), s.end());

    cout << s << " " << t << endl;
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
