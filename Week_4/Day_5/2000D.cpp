/***********************************************************************

Name --> D. Right Left Wrong
Link --> https://codeforces.com/contest/2000/problem/D

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
    forl(i, 0, n)
    {
        cin >> a[i];
    }

    string s;
    cin >> s;

    vector<int> pre_sum(n);
    pre_sum[0] = a[0];
    forl(i, 1, n)
    {
        pre_sum[i] = pre_sum[i - 1] + a[i];
    }

    int l = 0, r = n - 1, sum = 0;

    while (l <= r)
    {
        while (l < n && s[l] != 'L')
        {
            l++;
        }
        while (r >=0 && s[r] != 'R')
        {
            r--;
        }

        if (l <= r && l < n && r >= 0)
        {
            if (l == 0)
                sum += pre_sum[r] - 0;
            else
                sum += pre_sum[r] - pre_sum[l - 1];
        }

        l++;
        r--;
    }

    cout << sum << endl;
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
