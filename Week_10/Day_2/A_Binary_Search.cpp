/***********************************************************************

Name --> A. Binary Search
Link --> https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A

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

    vector<int> a(n);
    forl(i, 0, n) cin >> a[i];

    while (k--)
    {
        int x;
        cin >> x;

        int l = 0, r = n - 1, mid;

        bool ok = false;

        while (l <= r)
        {
            mid = (l + r) / 2;

            if (x == a[mid])
            {
                ok = true;
                break;
            }
            else if (x < a[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }

        if (ok)
            yes;
        else
            no;
    }
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
