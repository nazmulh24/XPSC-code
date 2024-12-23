/***********************************************************************

Name --> A. k-th divisor
Link --> https://codeforces.com/problemset/problem/762/A

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
    int n, k;
    cin >> n >> k;

    vector<int> divisor;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisor.pb(i);

            if ((n / i) != i)
                divisor.pb(n / i);
        }
    }

    sort(all(divisor));

    // trav(A, divisor)
    // {
    //     cout << A << " ";
    // }
    // cout << endl;

    if (sz(divisor) >= k)
        cout << divisor[k - 1] << endl;
    else
        cout << "-1" << endl;
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
