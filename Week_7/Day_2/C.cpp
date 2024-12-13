/***********************************************************************

Name --> H. Maximal AND
Link --> https://codeforces.com/problemset/problem/1669/H

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

const int B = 30;

void solve()
{
    int n, K;
    cin >> n >> K;

    vector<int> a(n);

    forl(i, 0, n)
    {
        cin >> a[i];
    }

    vector<int> bits(B + 1);

    forl(i, 0, n)
    {
        rfor(k, B, 0)
        {
            if ((a[i] >> k) & 1)
                bits[k]++;
        }
    }

    int ans = 0, AND = (1ll << 31) - 1;

    rfor(k, B, 0)
    {
        if (bits[k] == n)
            ans += (1ll << k);
        else
        {
            int need = n - bits[k];

            if (K >= need)
            {
                ans += (1ll << k);

                K -= need;
            }
        }
    }

    cout << ans << endl;
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
