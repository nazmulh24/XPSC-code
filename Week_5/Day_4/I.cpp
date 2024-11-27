/***********************************************************************

Name --> I - Parity and Sum
Link --> https://vjudge.net/contest/674807#problem/I

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

    int o_c = 0, e_c = 0;

    vector<int> a(n), even, odd;
    trav(A, a)
    {
        cin >> A;
        if (A % 2 == 0)
            even.pb(A);
        else
            odd.pb(A);
    }

    if (sz(even) == 0 || sz(odd) == 0)
    {
        cout << 0 << endl;
        return;
    }

    sort(all(even));
    sort(all(odd));

    int ans = 0;
    int mx = odd.back();

    forl(i, 0, sz(even))
    {
        if (even[i] > mx)
        {
            ans = sz(even) + 1;
            break;
        }
        else
        {
            ans++;
            mx += even[i];
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
