/***********************************************************************

Name --> C. Update Queries
Link --> https://codeforces.com/problemset/problem/1986/C

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
    int n, m;
    cin >> n >> m;

    string s1;
    cin >> s1;

    set<int> v;

    forl(i, 0, m)
    {
        int x;
        cin >> x;
        v.insert(x);
    }

    string s2;
    cin >> s2;

    sort(all(s2));

    int i = 0;
    for (int index : v)
    {
        if (index - 1 < n)
        { // Ensure the index is within bounds of s1
            s1[index - 1] = s2[i++];
        }
    }

    cout << s1 << endl;
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
