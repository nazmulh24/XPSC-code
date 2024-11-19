/***********************************************************************

Name --> G - Decode String
Link --> https://vjudge.net/contest/672779#problem/G

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
    int q;
    cin >> q;

    vector<char> v(26 + 1);
    forl(i, 1, 27)
    {
        v[i] = 'a' + i - 1;
    }

    // forl(i, 1, 27)
    // {
    //     cout << i << " " << v[i] << endl;
    // }

    while (q--)
    {
        int n;
        cin >> n;

        string s, ans;
        cin >> s;

        rfor(i, n - 1, 0)
        {
            if (s[i] == '0')
            {
                string ss = s.substr(i - 2, 2);
                // cout << ss << endl;

                int j = stoi(ss); //--> stoi change string to integer...

                ans += v[j];

                i -= 2;
            }
            else
            {
                int j = s[i] - '0';

                ans += v[j];
            }
        }

        reverse(all(ans));

        cout << ans << endl;
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
