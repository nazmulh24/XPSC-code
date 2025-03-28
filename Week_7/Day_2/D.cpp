/***********************************************************************

Name --> B. Fun Game
Link --> https://codeforces.com/problemset/problem/1994/B

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
    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    if (s == t || s[0] == '1')
    {
        yes;
        return;
    }

    int pos = -1;

    forl(i, 0, n)
    {
        if (s[i] == '1')
        {
            pos = i;
            break;
        }
    }

    if (pos != -1)
    {
        bool flag = true;

        forl(i, 0, n)
        {
            if (s[i] != t[i])
            {
                if (pos > i)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            yes;
        else
            no;
    }
    else
        no;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ttttt = 1;
    cin >> ttttt; //--> Uncomment if multiple test cases

    while (ttttt--)
    {
        solve();
    }

    return 0;
}
