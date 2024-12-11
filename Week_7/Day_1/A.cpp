/***********************************************************************

Name --> B. Petr and a Combination Lock
Link --> https://codeforces.com/problemset/problem/1097/B

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
    trav(A, a) cin >> A;

    bool flag = false;

    forl(mask, 0, (1 << n))
    {
        int sum = 0;

        forl(k, 0, n)
        {
            if ((mask >> k) & 1)
                sum += a[k];
            else
                sum -= a[k];
        }

        if (sum % 360 == 0)
        {
            flag = true;
            break;
        }
    }

    if (flag)
        yes;
    else
        no;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t; // Uncomment if multiple test cases

    while (t--)
    {
        solve();
    }

    return 0;
}
 