/***********************************************************************

Name --> Exponentiation
Link --> https://cses.fi/problemset/task/1095

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

int GCD(int a, int b)
{
    return __gcd(a, b); //--> O(log(min(a, b)))
}

int LCM(int a, int b)
{
    return (a / __gcd(a, b)) * b; //--> O(log(min(a, b)))
}

//********************************************************************

const int MOD = 1e9 + 7;

int powerr(int x, int n)
{
    int ans = 1 % MOD;

    while (n > 0)
    {
        if (n & 1 == true)
        {
            // cout << 1 << " ";

            ans = ((ans % MOD) * (x % MOD)) % MOD;
        }
        // else
        //     cout << 0 << " ";

        x = 1ll * x * x % MOD;
        n = n >> 1;
    }

    return ans;
}

void solve()
{
    int a, b;
    cin >> a >> b;

    int anss = powerr(a, b);
    cout << anss << endl;

    // forl(i, 0, b)
    // {
    //     ans = ((ans % MOD) * (a % MOD)) % MOD;
    // }

    // cout << ans << endl;
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
