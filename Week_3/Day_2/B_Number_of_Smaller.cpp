/***********************************************************************

Name --> B. Number of Smaller
Link --> https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B

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
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    forl(i, 0, n)
    {
        cin >> a[i];
    }
    forl(i, 0, m)
    {
        cin >> b[i];
    }

    int l = 0, r = 0, cnt = 0;

    while (r < m)
    {
        if (l < n && a[l] < b[r])
        {
            cnt++;
            l++;
        }
        else
        {
            r++;
            cout << cnt << " ";
        }
    }

    cout << endl;
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
