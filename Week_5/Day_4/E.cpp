/***********************************************************************

Name --> E - Mex Master
Link --> https://vjudge.net/contest/674807#problem/E

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

    int z = 0, nz = 0;

    vector<int> a(n);
    trav(A, a)
    {
        cin >> A;

        if (A == 0)
            z++;
        else
            nz++;
    }

    int ans = 0;

    if (z == 0)
        ans = 0;
    else
    {
        if (z < nz + 2)
            ans = 0;
        else
        {
            int mx = *max_element(all(a));

            if (mx == 1)
                ans = 2;
            else
                ans = 1;
        }
    }

    cout << ans << endl;
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
