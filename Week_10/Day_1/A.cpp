/***********************************************************************

Name --> A - Palindrome Reorder
Link --> https://vjudge.net/contest/682611#problem/A

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
    string s;
    cin >> s;

    map<char, int> m;

    forl(i, 0, sz(s))
    {
        m[s[i]]++;
    }

    int cnt = 0;
    trav(a, m)
    {
        if (a.se % 2 != 0)
        {
            cnt++;

            if (cnt > 1)
            {
                cout << "NO SOLUTION" << endl;
                return;
            }
        }
    }

    string ans = "";
    char x = '#';

    trav(a, m)
    {
        forl(i, 0, a.se / 2)
        {
            ans.pb(a.fi);
        }

        if (a.se % 2 == 1)
            x = a.fi;
    }

    s = ans;

    if (x != '#')
        s += x;

    reverse(all(ans));
    s += ans;

    cout << s << endl;
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
