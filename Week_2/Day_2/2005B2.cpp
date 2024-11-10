/***********************************************************************

Name --> B2. The Strict Teacher (Hard Version)
Link --> https://codeforces.com/problemset/problem/2005/B2

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
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> teacher(m);

    forl(i, 0, m)
    {
        cin >> teacher[i];
    }

    sort(all(teacher));

    while (q--)
    {
        int b;
        cin >> b;
        int k = upper_bound(all(teacher), b) - teacher.begin();

        // cout << k << endl;

        if (k == 0)
            cout << teacher[0] - 1 << endl;
        else if (k == m)
            cout << n - teacher[m - 1] << endl;
        else
            cout << (teacher[k] - teacher[k - 1]) / 2 << endl;
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
