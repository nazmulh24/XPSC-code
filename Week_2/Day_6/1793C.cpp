/***********************************************************************

Name --> C. Dora and Search
Link --> https://codeforces.com/problemset/problem/1793/C

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
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)
#define UNIQUE(v) v.erase(unique(all(v)), v.end())
//********************************************************************

int MAXX(vector<int> v)
{
    sort(all(v));
    int mx = *v.rbegin();

    return mx;
}

int MINN(vector<int> v)
{
    sort(all(v));
    int mn = *v.begin();

    return mn;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }

    int mx = MAXX(a);
    int mn = MINN(a);

    // trav(x, a)
    // {
    //     cout << x << " ";
    // }
    // cout << " -> " << mx << " " << mn << endl;

    int l = 0, r = n - 1;

    while (l <= r)
    {
        if (a[l] == mn)
        {
            l++;
            mn++;
        }
        else if (a[l] == mx)
        {
            l++;
            mx--;
        }
        else if (a[r] == mn)
        {
            r--;
            mn++;
        }
        else if (a[r] == mx)
        {
            r--;
            mx--;
        }
        else
            break;
    }

    if (l <= r)
        cout << l+1 << " " << r+1 << endl;
    else
        cout << -1 << endl;
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
