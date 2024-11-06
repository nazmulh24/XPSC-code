/***********************************************************************

Name --> B. Colourblindness
Link --> https://codeforces.com/problemset/problem/1722/B

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

string tRow(string row)
{
    for (char &c : row)
    {
        if (c == 'G' || c == 'B')
            c = 'X';
    }

    return row;
}

void solve()
{
    int n;
    cin >> n;

    string s1, s2;

    cin >> s1 >> s2;

    s1 = tRow(s1);
    s2 = tRow(s2);

    if (s1 == s2)
        yes;
    else
        no;
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
