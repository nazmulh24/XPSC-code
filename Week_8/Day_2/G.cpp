/***********************************************************************

Name --> G - Deja Vu
Link --> https://vjudge.net/contest/679642#problem/G

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
    int n, q;
    cin >> n >> q;

    vector<int> a(n), b;

    trav(A, a) cin >> A;

    forl(i, 0, q)
    {
        int x;
        cin >> x;

        if (b.empty() || b.back() > x)
            b.pb(x);
    }

    forl(i, 0, n)
    {
        trav(j, b)
        {
            if (a[i] % (1 << j) == 0)
                a[i] += (1 << (j - 1));
        }
    }

    trav(A, a) cout << A << " ";
    cout << endl;
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
