/***********************************************************************

Name --> B. GCD Partition
Link --> https://codeforces.com/problemset/problem/1780/B

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

bool isPrime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

//********************************************************************

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> pSum(n);

    forl(i, 0, n)
    {
        cin >> a[i];

        if (i == 0)
            pSum[i] = a[i];
        else
            pSum[i] = pSum[i - 1] + a[i];
    }

    int ans = 0;

    forl(i, 1, n)
    {
        int l = pSum[i - 1];
        int r = pSum[n - 1];

        ans = max(ans, __gcd(l, r - l));
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
