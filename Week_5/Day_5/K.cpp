/***********************************************************************

Name --> K - Prefix Sum Addicts
Link --> https://vjudge.net/contest/674807#problem/K

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
    int n, k;
    cin >> n >> k;

    vector<int> s(n + 1, 0);
    forl(i, n - k + 1, n + 1)
    {
        cin >> s[i];
    }

    if (n == 1 || k == 1)
    {
        yes;
        return;
    }

    vector<int> ans(n + 1);
    rfor(i, n, n - k + 2)
    {
        ans[i] = s[i] - s[i - 1];
    }

    bool flag = true;

    forl(i, n - k + 2, n)
    {
        if (ans[i + 1] < ans[i])
        {
            flag = false;
            break;
        }
    }

    if (!flag)
    {
        no;
        return;
    }

    rfor(i, n - k + 1, 2)
    {
        ans[i] = ans[i + 1];
        s[i - 1] = s[i] - ans[i];
    }
    ans[1] = s[1];

    forl(i, 1, n)
    {
        if (ans[i + 1] < ans[i])
        {
            flag = false;
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
    cin >> t; // Uncomment if multiple test cases

    while (t--)
    {
        solve();
    }

    return 0;
}
