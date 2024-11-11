/***********************************************************************

Name --> E - Maximise Sum
Link --> https://vjudge.net/contest/671238#problem/E

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

    vector<int> a(n);

    int sum = 0, mn = LLONG_MAX;

    int n_cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += abs(a[i]);
        if (a[i] < 0)
            n_cnt++;

        mn = min(mn, abs(a[i]));
    }

    if (n_cnt % 2 != 0)
        sum = sum - 2 * mn;

    cout << sum << endl;
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
