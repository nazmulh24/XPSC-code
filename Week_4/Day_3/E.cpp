/***********************************************************************

Name --> E - Jellyfish and Undertale
Link --> https://vjudge.net/contest/672779#problem/E

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
    int a, b, n;
    cin >> a >> b >> n;

    vector<int> v(n);
    forl(i, 0, n)
    {
        cin >> v[i];
    }

    int cnt = 0;

    for (int i = 0; i < n && b > 0; i++)
    {
        if (b > 1)
        {
            cnt += (b - 1);
            b = 1;
        }

        b = min(a, (b + v[i]));
    }
    cnt += b;

    cout << cnt << endl;
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
