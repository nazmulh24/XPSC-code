/***********************************************************************

Name --> N - Not a Substring
Link --> https://vjudge.net/contest/674807#problem/N

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
    string s;
    cin >> s;

    int n = sz(s);

    if (s == "()")
        no;
    else
    {
        yes;

        string ans;

        forl(i, 0, n)
        {
            ans += "()";
        }

        if (ans.find(s) == string::npos)
        {
            cout << ans << endl;
        }
        else
        {
            ans = "";
            forl(i, 0, n)
            {
                ans += "(";
            }
            forl(i, 0, n)
            {
                ans += ")";
            }

            cout << ans << endl;
        }
    }
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